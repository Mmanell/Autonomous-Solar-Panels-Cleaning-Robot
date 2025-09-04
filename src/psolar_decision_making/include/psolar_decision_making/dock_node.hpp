#pragma once

#include <memory>
#include <string>
#include "behaviortree_cpp/action_node.h"
#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "opennav_docking_msgs/action/dock_robot.hpp"

class DockRobotNode : public BT::SyncActionNode
{
public:
    using DockRobot = opennav_docking_msgs::action::DockRobot;
    using GoalHandleDockRobot = rclcpp_action::ClientGoalHandle<DockRobot>;

    DockRobotNode(const std::string &name, const BT::NodeConfiguration &config);

    static BT::PortsList providedPorts()
    {
        return {};
    }

    BT::NodeStatus tick() override;

private:
    rclcpp::Node::SharedPtr node_;
    rclcpp_action::Client<DockRobot>::SharedPtr client_;

    void feedback_callback(
        GoalHandleDockRobot::SharedPtr,
        const std::shared_ptr<const DockRobot::Feedback> feedback);
};
