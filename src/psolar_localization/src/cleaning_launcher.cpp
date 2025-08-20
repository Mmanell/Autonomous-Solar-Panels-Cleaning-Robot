#include <memory>
#include <cstdlib>
#include <rclcpp/rclcpp.hpp>
#include "nav_msgs/msg/odometry.hpp"

class ZoneTriggerNode : public rclcpp::Node
{
public:
  ZoneTriggerNode()
  : Node("zone_trigger_node"), triggered_(false)
  {
    sub_ = this->create_subscription<nav_msgs::msg::Odometry>(
      "/odometry/global", 10, std::bind(&ZoneTriggerNode::odomCallback, this, std::placeholders::_1));
    
    RCLCPP_INFO(this->get_logger(), "ZoneTriggerNode started, monitoring robot position.");
  }

private:
  rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr sub_;
  bool triggered_;

  void odomCallback(const nav_msgs::msg::Odometry::SharedPtr msg)
  {
    double x = msg->pose.pose.position.x;
    double y = msg->pose.pose.position.y;

    // Check if robot is inside the zone (example: x in [1,2], y in [3,4])
    if (!triggered_ && x >= 0.1 && x <= 0.3 && y >= 0.4 && y <= 0.6) {
      triggered_ = true;
      RCLCPP_INFO(this->get_logger(), "Robot entered the zone! Launching nodes...");

      // Launch the GPS tilted publisher node
      std::system("ros2 run psolar_localization gps_tilted_publisher");

      // Optionally launch another node or script
      //std::system("ros2 launch opennav_coverage_demo test_complete_launch.py");
    }
  }
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<ZoneTriggerNode>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}
