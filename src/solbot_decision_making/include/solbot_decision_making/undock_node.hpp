#ifndef PSOLAR_DECISION_MAKING_UNDOCK_NODE_HPP
#define PSOLAR_DECISION_MAKING_UNDOCK_NODE_HPP

#include <string>
#include <memory>

#include "behaviortree_cpp/action_node.h"
#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "opennav_docking_msgs/action/undock_robot.hpp"


class UndockAction : public BT::SyncActionNode
{
public:
    explicit UndockAction(const std::string& name, const BT::NodeConfig& config);

    static BT::PortsList providedPorts();

    BT::NodeStatus tick() override;

private:
    rclcpp::Node::SharedPtr node_;
    using UndockRobot = opennav_docking_msgs::action::UndockRobot;
    rclcpp_action::Client<UndockRobot>::SharedPtr action_client_;
};

#endif  // PSOLAR_DECISION_MAKING_UNDOCK_NODE_HPP
