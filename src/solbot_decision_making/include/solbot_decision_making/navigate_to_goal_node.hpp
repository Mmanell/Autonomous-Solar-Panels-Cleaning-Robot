#pragma once

#include <behaviortree_cpp/action_node.h>
#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/pose_stamped.hpp"
#include "nav2_msgs/action/navigate_to_pose.hpp"
#include "rclcpp_action/rclcpp_action.hpp"

class NavigateToGoal : public BT::SyncActionNode
{
public:
    // Constructor
    NavigateToGoal(const std::string &name, const BT::NodeConfiguration &config);

    // Mandatory static method to define input ports
    static BT::PortsList providedPorts();

    // Override the tick() method
    BT::NodeStatus tick() override;

private:
    // ROS node for this BT action
    rclcpp::Node::SharedPtr node_;

    // Action client for NavigateToPose
    rclcpp_action::Client<nav2_msgs::action::NavigateToPose>::SharedPtr client_;
};
