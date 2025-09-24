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
#include <iostream>

// RollingMean class unchanged
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
        joint_sub_ = create_subscription<sensor_msgs::msg::JointState>(
            "/joint_states", 10,
            std::bind(&DiffDriveClone::jointCallback, this, std::placeholders::_1));

        imu_sub_ = create_subscription<sensor_msgs::msg::Imu>(
            "/imu", 10,
            std::bind(&DiffDriveClone::imuCallback, this, std::placeholders::_1));

        odom_sub_ = create_subscription<nav_msgs::msg::Odometry>(
            "/odom", 10,
            std::bind(&DiffDriveClone::odomCallback, this, std::placeholders::_1));

        odom_pub_ = create_publisher<nav_msgs::msg::Odometry>("/odom_clone", 10);
        tf_broadcaster_ = std::make_unique<tf2_ros::TransformBroadcaster>(*this);
        last_time_ = now();

        update_timer_ = this->create_wall_timer(
            std::chrono::milliseconds(20),
            std::bind(&DiffDriveClone::updateOdometry, this));
    }

private:
    void jointCallback(const sensor_msgs::msg::JointState::SharedPtr msg)
    {
        latest_joint_state_ = *msg;
        joint_state_received_ = true;
    }

    void imuCallback(const sensor_msgs::msg::Imu::SharedPtr msg)
    {
        latest_imu_data_ = *msg;
        imu_data_received_ = true;
    }

    void odomCallback(const nav_msgs::msg::Odometry::SharedPtr msg)
    {
        latest_odom_ = *msg;
        odom_received_ = true;
    }

    void updateOdometry()
    {
        if (!joint_state_received_ || !imu_data_received_ || !odom_received_)
        {
            return;
        }

        double left_pos = 0.0, right_pos = 0.0;
        bool left_found = false, right_found = false;
        
        for (size_t i = 0; i < latest_joint_state_.name.size(); ++i)
        {
            if (latest_joint_state_.name[i] == "wheel_left_joint") { left_pos = latest_joint_state_.position[i]; left_found = true; }
            else if (latest_joint_state_.name[i] == "wheel_right_joint") { right_pos = latest_joint_state_.position[i]; right_found = true; }
        }
        if (!left_found || !right_found) return;

        rclcpp::Time current_time = now();
        double dt = (current_time - last_time_).seconds();

        if (first_reading_ || dt <= 0.0)
        {
            left_old_pos_ = left_pos;
            right_old_pos_ = right_pos;
            first_reading_ = false;
            last_time_ = current_time;
            return;
        }

        double left_delta = (left_pos - left_old_pos_) * wheel_radius_;
        double right_delta = (right_pos - right_old_pos_) * wheel_radius_;
        left_old_pos_ = left_pos;
        right_old_pos_ = right_pos;

        tf2::Quaternion q(
            latest_imu_data_.orientation.x,
            latest_imu_data_.orientation.y,
            latest_imu_data_.orientation.z,
            latest_imu_data_.orientation.w);
        tf2::Matrix3x3 m(q);
        double roll, pitch, yaw;
        m.getRPY(roll, pitch, yaw);

        const double pitch_threshold = 4.0 * M_PI / 180.0; 
        double linear_disp;
        double angular_disp;
        
        if (std::fabs(pitch) > pitch_threshold)
        {
            linear_disp = (right_delta + left_delta) * 0.5 * std::cos(pitch);
            angular_disp = (right_delta - left_delta) / wheel_separation_ * std::cos(pitch);
        }
        else
        {
            linear_disp = (right_delta + left_delta) * 0.5;
            angular_disp = (right_delta - left_delta) / wheel_separation_;
        }

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

        double linear_vel = latest_odom_.twist.twist.linear.x;
        double angular_vel = latest_odom_.twist.twist.angular.z;
        if (fabs(pitch) > pitch_threshold) {
            linear_vel *= cos(pitch);
        }

        last_time_ = current_time;

        nav_msgs::msg::Odometry odom;
        odom.header.stamp = current_time;
        odom.header.frame_id = "odom";
        odom.child_frame_id = "base_footprint_clone";
        odom.pose.pose.position.x = x_;
        odom.pose.pose.position.y = y_;
        odom.pose.pose.orientation.z = std::sin(heading_ / 2.0);
        odom.pose.pose.orientation.w = std::cos(heading_ / 2.0);
        odom.twist.twist.linear.x = linear_vel;
        odom.twist.twist.angular.z = angular_vel;
        odom_pub_->publish(odom);

        geometry_msgs::msg::TransformStamped tf;
        tf.header.stamp = current_time;
        tf.header.frame_id = "odom";
        tf.child_frame_id = "base_footprint_clone";
        tf.transform.translation.x = x_;
        tf.transform.translation.y = y_;
        tf.transform.rotation = odom.pose.pose.orientation;
        tf_broadcaster_->sendTransform(tf);
    }
    
    rclcpp::Subscription<sensor_msgs::msg::JointState>::SharedPtr joint_sub_;
    rclcpp::Subscription<sensor_msgs::msg::Imu>::SharedPtr imu_sub_;
    rclcpp::Publisher<nav_msgs::msg::Odometry>::SharedPtr odom_pub_;
    rclcpp::TimerBase::SharedPtr update_timer_;
    std::unique_ptr<tf2_ros::TransformBroadcaster> tf_broadcaster_;
    rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr odom_sub_;
    
    nav_msgs::msg::Odometry latest_odom_;
    bool odom_received_ = false;

    sensor_msgs::msg::JointState latest_joint_state_;
    bool joint_state_received_ = false;

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
