#include "psolar_decision_making/dock_if_low_battery_node.hpp"

DockIfLowBattery::DockIfLowBattery(const std::string &name, const BT::NodeConfiguration &config)
    : BT::ConditionNode(name, config),
      battery_level_(100.0f),
      battery_received_(false),
      threshold_(20) // default threshold 20%
{
    // Create node
    node_ = rclcpp::Node::make_shared("dock_if_low_battery");

    // Subscribe to battery topic
    battery_sub_ = node_->create_subscription<sensor_msgs::msg::BatteryState>(
        "/battery_status", 10,
        std::bind(&DockIfLowBattery::batteryCallback, this, std::placeholders::_1));

    RCLCPP_INFO(node_->get_logger(), "DockIfLowBattery node initialized");
}

void DockIfLowBattery::batteryCallback(const sensor_msgs::msg::BatteryState::SharedPtr msg)
{
    battery_level_ = msg->percentage * 100.0f;
    battery_received_ = true;
    RCLCPP_INFO(node_->get_logger(), "DockIfLowBattery received battery: %.1f%%", battery_level_);
}

BT::NodeStatus DockIfLowBattery::tick()
{
    // Process callbacks
    rclcpp::spin_some(node_);

    if (!battery_received_) {
        // Haven't received a battery message yet
        return BT::NodeStatus::RUNNING;
    }

    if (battery_level_ < threshold_) {
        RCLCPP_INFO(node_->get_logger(), "DockIfLowBattery: battery %.1f%% < threshold %d%%, docking...",
                    battery_level_, threshold_);
        return BT::NodeStatus::RUNNING; // Keep docking until charged
    }

    RCLCPP_INFO(node_->get_logger(), "DockIfLowBattery: battery %.1f%% >= threshold %d%%, finished docking",
                battery_level_, threshold_);
    return BT::NodeStatus::SUCCESS;
}
