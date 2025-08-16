#ifndef CORRECTED_ODOMETRY_PUBLISHER_HPP
#define CORRECTED_ODOMETRY_PUBLISHER_HPP


#include <rclcpp/rclcpp.hpp>
#include <geometry_msgs/msg/twist_stamped.hpp>
#include <Eigen/Core>
#include <std_msgs/msg/float64_multi_array.hpp>
#include <sensor_msgs/msg/joint_state.hpp>
#include <nav_msgs/msg/odometry.hpp>
#include <geometry_msgs/msg/transform_stamped.hpp>
#include <tf2_ros/transform_broadcaster.h>


class SimpleController : public rclcpp::Node
{
public:
    SimpleController(const std::string& name);

private:

    void jointCallback(const sensor_msgs::msg::JointState &msg);

    rclcpp::Subscription<sensor_msgs::msg::JointState>::SharedPtr joint_sub_;
    rclcpp::Publisher<nav_msgs::msg::Odometry>::SharedPtr odom_pub_;

    // Odometry
    double wheel_radius_;
    double wheel_separation_;
    Eigen::Matrix2d speed_conversion_;
     double left_wheel_prev_pos_;
    double right_wheel_prev_pos_;
    rclcpp::Time prev_time_;
    nav_msgs::msg::Odometry odom_msg_;
    double x_;
    double y_;
    double theta_;

    // TF
    std::unique_ptr<tf2_ros::TransformBroadcaster> transform_broadcaster_;
    geometry_msgs::msg::TransformStamped transform_stamped_;
};

#endif // CORRECTED_ODOMETRY_PUBLISHER_HPP