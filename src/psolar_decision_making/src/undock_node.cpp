#include "psolar_decision_making/undock_node.hpp"

UndockAction::UndockAction(const std::string& name, const BT::NodeConfig& config)
    : BT::SyncActionNode(name, config) {}

BT::PortsList UndockAction::providedPorts() { return {}; }

BT::NodeStatus UndockAction::tick()
{
    RCLCPP_INFO(rclcpp::get_logger("BT"), "Undocking robot...");
    return BT::NodeStatus::SUCCESS;
}
