#include "psolar_decision_making/battery_low_node.hpp"
#include <behaviortree_cpp/bt_factory.h>

BatteryLow::BatteryLow(const std::string &name, const BT::NodeConfiguration &config)
    : BT::ConditionNode(name, config), battery_level_(-1.0f)
{
    // Get node from blackboard with error checking
    node_ = rclcpp::Node::make_shared("battery_low_node");
    


    // Subscribe to battery topic
    battery_sub_ = node_->create_subscription<sensor_msgs::msg::BatteryState>(
        "/battery_status", 10,
        std::bind(&BatteryLow::batteryCallback, this, std::placeholders::_1));

    
    RCLCPP_INFO(node_->get_logger(), "BatteryLow node initialized");
}

BT::PortsList BatteryLow::providedPorts()
{
    // Add threshold as an input port for flexibility
    return { };
}

void BatteryLow::batteryCallback(const sensor_msgs::msg::BatteryState::SharedPtr msg)
{
    battery_level_ = msg->percentage * 100.0f;
    RCLCPP_INFO(node_->get_logger(), "Received battery update: %.1f%%", battery_level_);
}

BT::NodeStatus BatteryLow::tick()
{
    // Process any incoming messages
    rclcpp::spin_some(node_);

    // Check if we have received a valid battery value yet
    if (battery_level_ < 0.0f)
    {
        RCLCPP_WARN(node_->get_logger(), "BatteryLow: waiting for battery data...");
        return BT::NodeStatus::RUNNING;  // keep trying until a value arrives
    }

    RCLCPP_INFO(node_->get_logger(), "Battery level: %.1f%%, Threshold: %d%%", 
                battery_level_, threshold_);

    if (battery_level_ < threshold_)
    {
        RCLCPP_INFO(node_->get_logger(), "BatteryLow: battery %.1f%% < threshold %d%%", 
                    battery_level_, threshold_);
        return BT::NodeStatus::SUCCESS;
    }

    return BT::NodeStatus::FAILURE;
}
