#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "nav_msgs/msg/odometry.hpp"

class OdomTiltedNode : public rclcpp::Node
{
public:
  OdomTiltedNode()
  : Node("odom_tilted_node")
  {
    publisher_ = this->create_publisher<nav_msgs::msg::Odometry>("odometry/global/panel", 10);
    subscription_ = this->create_subscription<nav_msgs::msg::Odometry>(
      "odometry/global",
      10,
      std::bind(&OdomTiltedNode::odomCallback, this, std::placeholders::_1)
    );

    RCLCPP_INFO(this->get_logger(), "OdomTiltedNode started, remapping odom -> odom_tilted");
  }

private:
  rclcpp::Publisher<nav_msgs::msg::Odometry>::SharedPtr publisher_;
  rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr subscription_;
  void odomCallback(const nav_msgs::msg::Odometry::SharedPtr msg)
  {
    auto new_msg = nav_msgs::msg::Odometry();

    new_msg.header = msg->header;
    new_msg.child_frame_id = msg->child_frame_id;
    new_msg.pose = msg->pose;
    new_msg.twist = msg->twist;
    new_msg.pose.pose.position.x += 0.1;   // add 0.1 to x
    new_msg.pose.pose.position.y -= 0.2;   // subtract 0.2 from y

    // Change frame id
    new_msg.header.frame_id = "solar_panel";

    publisher_->publish(new_msg);
  }

  
};

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<OdomTiltedNode>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}
