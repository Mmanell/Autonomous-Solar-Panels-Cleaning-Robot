#pragma once

#include <behaviortree_cpp/condition_node.h>
#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/battery_state.hpp>

class DockIfLowBattery : public BT::ConditionNode
{
public:
    DockIfLowBattery(const std::string &name, const BT::NodeConfiguration &config);

    static BT::PortsList providedPorts() { return {}; }

    BT::NodeStatus tick() override;

private:
    void batteryCallback(const sensor_msgs::msg::BatteryState::SharedPtr msg);

    rclcpp::Node::SharedPtr node_;
    rclcpp::Subscription<sensor_msgs::msg::BatteryState>::SharedPtr battery_sub_;
    float battery_level_;
    bool battery_received_;
    int threshold_; // Battery threshold to stop docking
};
