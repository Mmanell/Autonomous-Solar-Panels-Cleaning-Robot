#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "rclcpp/duration.hpp"
#include "nav_msgs/msg/odometry.hpp"
#include "tf2_geometry_msgs/tf2_geometry_msgs.hpp"

#include "tf2/exceptions.h"

#include "tf2_ros/buffer.h"
#include "tf2_ros/transform_listener.h"

using std::placeholders::_1;

class GpsTilted : public rclcpp::Node
{
public: GpsTilted(): Node("gps_tilted"),
    tf_buffer_(this->get_clock()),
    tf_listener_(tf_buffer_)
  {
    this->declare_parameter<std::string>("target_frame", "map_tilted");
    target_frame_ = this->get_parameter("target_frame").as_string();

    subscription_ = this->create_subscription<nav_msgs::msg::Odometry>(
      "odometry/gps",
      10,
      std::bind(&GpsTilted::odometryCallback, this, _1));

    publisher_ = this->create_publisher<nav_msgs::msg::Odometry>("odometry/gps_tilted", 10);

    RCLCPP_INFO(this->get_logger(),
                "GPS Tilted node started, transforming to '%s' frame.",
                target_frame_.c_str());
  }

private:
  std::string target_frame_;
  tf2_ros::Buffer tf_buffer_;
  tf2_ros::TransformListener tf_listener_;
  rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr subscription_;
  rclcpp::Publisher<nav_msgs::msg::Odometry>::SharedPtr publisher_;

  void odometryCallback(const nav_msgs::msg::Odometry::SharedPtr msg)
  {
    const std::string source_frame = msg->header.frame_id;
    if (source_frame.empty()) {
      RCLCPP_WARN(this->get_logger(), "Incoming odom has empty header.frame_id, skipping");
      return;
    }

    if (source_frame == target_frame_) {
      publisher_->publish(*msg);
      return;
    }

    geometry_msgs::msg::TransformStamped tf_map_to_tilted;
    try {

      tf_map_to_tilted = tf_buffer_.lookupTransform(
        target_frame_,
        source_frame,
        tf2::TimePointZero
      );

    } catch (const tf2::TransformException & ex) {
      RCLCPP_WARN(this->get_logger(),
                  "Could not lookup transform from '%s' to '%s': %s",
                  source_frame.c_str(), target_frame_.c_str(), ex.what());
      return;
    }

    // Create a Pose message for the robot in the source frame
    geometry_msgs::msg::PoseStamped robot_pose_in_map;
    robot_pose_in_map.header.stamp = msg->header.stamp;
    robot_pose_in_map.header.frame_id = msg->header.frame_id;
    robot_pose_in_map.pose = msg->pose.pose;

    // Create a new Pose message for the transformed pose
    geometry_msgs::msg::PoseStamped robot_pose_in_tilted;

    // Use doTransform to apply the map_to_tilted transform to the robot's pose
    tf2::doTransform(robot_pose_in_map, robot_pose_in_tilted, tf_map_to_tilted);
    
    tf2::Quaternion q(
      tf_map_to_tilted.transform.rotation.x,
      tf_map_to_tilted.transform.rotation.y,
      tf_map_to_tilted.transform.rotation.z,
      tf_map_to_tilted.transform.rotation.w
    );

    // Linear velocity vector from odom.twist.twist
    tf2::Vector3 lin_vel(
      msg->twist.twist.linear.x,
      msg->twist.twist.linear.y,
      msg->twist.twist.linear.z
    );

    tf2::Vector3 ang_vel(
      msg->twist.twist.angular.x,
      msg->twist.twist.angular.y,
      msg->twist.twist.angular.z
    );

    tf2::Vector3 ang_vel_rotated = tf2::quatRotate(q, ang_vel);


    // Rotate it into the target frame
    tf2::Vector3 lin_vel_rotated = tf2::quatRotate(q, lin_vel);


    nav_msgs::msg::Odometry odom_msg;

    // Update the output odometry message with the transformed pose
    odom_msg.header.stamp = msg->header.stamp;
    odom_msg.header.frame_id = target_frame_;
    odom_msg.child_frame_id = msg->child_frame_id;
    odom_msg.pose.pose = robot_pose_in_tilted.pose;
    odom_msg.pose.covariance=msg->pose.covariance;
    odom_msg.twist.twist.linear.x  = lin_vel_rotated.x();
    odom_msg.twist.twist.linear.y  = lin_vel_rotated.y();
    odom_msg.twist.twist.linear.z  = lin_vel_rotated.z();
    odom_msg.twist.twist.angular.x = ang_vel_rotated.x();
    odom_msg.twist.twist.angular.y = ang_vel_rotated.y();
    odom_msg.twist.twist.angular.z = ang_vel_rotated.z();
    odom_msg.twist.covariance=msg->twist.covariance;

    publisher_->publish(odom_msg);

    RCLCPP_DEBUG(this->get_logger(),
                 "Transformed odom from '%s' to '%s' and republished.",
                 source_frame.c_str(), target_frame_.c_str());
  }


};

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<GpsTilted>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}
