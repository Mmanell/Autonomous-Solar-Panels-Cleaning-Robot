#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/joint_state.hpp>
#include <sensor_msgs/msg/imu.hpp>
#include <nav_msgs/msg/odometry.hpp>
#include <tf2_ros/transform_broadcaster.h>
#include <geometry_msgs/msg/transform_stamped.hpp>
#include <tf2/LinearMath/Quaternion.h>
#include <tf2/LinearMath/Matrix3x3.h>
#include <cmath>
#include <chrono>
#include <deque>
#include <numeric>
#include <mutex>
#include <iostream>

// RollingMean class is unchanged
class RollingMean
{
public:
    RollingMean(size_t window_size = 10)
        : windowSize_(window_size) {}

    void Push(double value)
    {
        values_.push_back(value);
        if (values_.size() > windowSize_)
        {
            values_.pop_front();
        }
    }

    double Mean() const
    {
        if (!values_.empty())
        {
            return std::accumulate(values_.begin(), values_.end(), 0.0) / values_.size();
        }
        return 0.0;
    }

    size_t Count() const
    {
        return values_.size();
    }

    void SetWindowSize(size_t window_size)
    {
        if (window_size > 0)
        {
            windowSize_ = window_size;
            this->Clear();
        }
    }

    void Clear()
    {
        values_.clear();
    }

    size_t WindowSize() const
    {
        return windowSize_;
    }

private:
    std::deque<double> values_;
    size_t windowSize_;
};

class DiffDriveClone : public rclcpp::Node
{
public:
    DiffDriveClone()
    : Node("diffdrive_clone"),
      wheel_radius_(0.033),
      wheel_separation_(0.287),
      x_(0.0), y_(0.0), heading_(0.0),
      left_old_pos_(0.0), right_old_pos_(0.0),
      first_reading_(true),
      linearMean(10),
      angularMean(10)
    {
        // Use a subscriber to get the latest joint state
        joint_sub_ = create_subscription<sensor_msgs::msg::JointState>(
            "/joint_states", 10,
            std::bind(&DiffDriveClone::jointCallback, this, std::placeholders::_1));

        // Use a subscriber to get the latest IMU data
        imu_sub_ = create_subscription<sensor_msgs::msg::Imu>(
            "/imu", 10,
            std::bind(&DiffDriveClone::imuCallback, this, std::placeholders::_1));

        odom_pub_ = create_publisher<nav_msgs::msg::Odometry>("/odom_clone", 10);
        tf_broadcaster_ = std::make_unique<tf2_ros::TransformBroadcaster>(*this);
        last_time_ = now();

        // Create a fixed-rate timer for odometry updates (50 Hz)
        update_timer_ = this->create_wall_timer(
            std::chrono::milliseconds(20),
            std::bind(&DiffDriveClone::updateOdometry, this));
    }

private:
    // Store the latest joint state in a member variable
    void jointCallback(const sensor_msgs::msg::JointState::SharedPtr msg)
    {
        std::lock_guard<std::mutex> lock(joint_state_mutex_);
        latest_joint_state_ = *msg;
        joint_state_received_ = true;
    }

    // Store the latest IMU data in a member variable
    void imuCallback(const sensor_msgs::msg::Imu::SharedPtr msg)
    {
        std::lock_guard<std::mutex> lock(imu_mutex_);
        latest_imu_data_ = *msg;
        imu_data_received_ = true;
    }

    // This function will be called at a fixed rate by the timer
    void updateOdometry()
    {
        // Acquire mutexes for both joint states and IMU data
        std::lock_guard<std::mutex> joint_lock(joint_state_mutex_);
        std::lock_guard<std::mutex> imu_lock(imu_mutex_);

        // Check if we have received data from both sensors
        if (!joint_state_received_ || !imu_data_received_)
        {
            return;
        }

        double left_pos = 0.0, right_pos = 0.0;
        bool left_found = false, right_found = false;
        
        // Find joint positions from the stored latest message
        for (size_t i = 0; i < latest_joint_state_.name.size(); ++i)
        {
            if (latest_joint_state_.name[i] == "wheel_left_joint") { left_pos = latest_joint_state_.position[i]; left_found = true; }
            else if (latest_joint_state_.name[i] == "wheel_right_joint") { right_pos = latest_joint_state_.position[i]; right_found = true; }
        }
        if (!left_found || !right_found) return;

        rclcpp::Time current_time = now();
        double dt = (current_time - last_time_).seconds();

        // Handle the first reading and zero dt
        if (first_reading_ || dt <= 0.0)
        {
            left_old_pos_ = left_pos;
            right_old_pos_ = right_pos;
            first_reading_ = false;
            last_time_ = current_time;
            return;
        }

        // Calculate wheel displacements and update old positions
        double left_delta = (left_pos - left_old_pos_) * wheel_radius_;
        double right_delta = (right_pos - right_old_pos_) * wheel_radius_;
        left_old_pos_ = left_pos;
        right_old_pos_ = right_pos;

        // Get Roll and Pitch from the IMU
        tf2::Quaternion q(
            latest_imu_data_.orientation.x,
            latest_imu_data_.orientation.y,
            latest_imu_data_.orientation.z,
            latest_imu_data_.orientation.w);
        tf2::Matrix3x3 m(q);
        double roll, pitch, yaw;
        m.getRPY(roll, pitch, yaw);

        // Set a threshold for when to apply the pitch correction
        const double pitch_threshold = 7.0 * M_PI / 180.0; // Convert 10 degrees to radians
        double linear_disp;
        
        // Conditionally apply the pitch correction
        if (std::fabs(pitch) > pitch_threshold)
        {
            // Correct linear displacement by projecting it onto the horizontal plane
            linear_disp = (right_delta + left_delta) * 0.5 * std::cos(pitch);
        }
        else
        {
            // Use the standard 2D odometry calculation
            linear_disp = (right_delta + left_delta) * 0.5;
        }

        // Angular displacement remains the same
        double angular_disp = (right_delta - left_delta) / wheel_separation_;
        
        // IntegrateExact - This part remains the same
        if (std::fabs(angular_disp) < 1e-6)
        {
            const double direction = heading_ + angular_disp * 0.5;
            x_ += linear_disp * std::cos(direction);
            y_ += linear_disp * std::sin(direction);
            heading_ += angular_disp;
        }
        else
        {
            double ratio = linear_disp / angular_disp;
            double heading_old = heading_;
            heading_ += angular_disp;
            x_ += ratio * (std::sin(heading_) - std::sin(heading_old));
            y_ += -ratio * (std::cos(heading_) - std::cos(heading_old));
        }

        // Calculate and filter velocities using the fixed dt
        linearMean.Push(linear_disp / dt);
        angularMean.Push(angular_disp / dt);
        double filtered_linear = linearMean.Mean();
        double filtered_angular = angularMean.Mean();
        
        last_time_ = current_time;

        // Publish odometry message
        nav_msgs::msg::Odometry odom;
        odom.header.stamp = current_time;
        odom.header.frame_id = "odom";
        odom.child_frame_id = "base_footprint_clone";
        odom.pose.pose.position.x = x_;
        odom.pose.pose.position.y = y_;
        odom.pose.pose.orientation.z = std::sin(heading_ / 2.0);
        odom.pose.pose.orientation.w = std::cos(heading_ / 2.0);
        odom.twist.twist.linear.x = filtered_linear;
        odom.twist.twist.angular.z = filtered_angular;
        odom_pub_->publish(odom);

        // Publish TF
        geometry_msgs::msg::TransformStamped tf;
        tf.header.stamp = current_time;
        tf.header.frame_id = "odom";
        tf.child_frame_id = "base_footprint_clone";
        tf.transform.translation.x = x_;
        tf.transform.translation.y = y_;
        tf.transform.rotation = odom.pose.pose.orientation;
        tf_broadcaster_->sendTransform(tf);
    }
    
    // Member variables
    rclcpp::Subscription<sensor_msgs::msg::JointState>::SharedPtr joint_sub_;
    rclcpp::Subscription<sensor_msgs::msg::Imu>::SharedPtr imu_sub_;
    rclcpp::Publisher<nav_msgs::msg::Odometry>::SharedPtr odom_pub_;
    rclcpp::TimerBase::SharedPtr update_timer_;
    std::unique_ptr<tf2_ros::TransformBroadcaster> tf_broadcaster_;

    std::mutex joint_state_mutex_;
    sensor_msgs::msg::JointState latest_joint_state_;
    bool joint_state_received_ = false;

    std::mutex imu_mutex_;
    sensor_msgs::msg::Imu latest_imu_data_;
    bool imu_data_received_ = false;

    double wheel_radius_, wheel_separation_;
    double x_, y_, heading_;
    double left_old_pos_ = 0.0, right_old_pos_ = 0.0;
    bool first_reading_;
    rclcpp::Time last_time_;
    RollingMean linearMean {10};
    RollingMean angularMean {10};
};

int main(int argc, char* argv[])
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<DiffDriveClone>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}