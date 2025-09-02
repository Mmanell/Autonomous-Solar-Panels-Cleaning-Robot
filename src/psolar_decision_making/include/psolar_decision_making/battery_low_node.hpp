#ifndef BATTERY_LOW_NODE_HPP
#define BATTERY_LOW_NODE_HPP

#include <behaviortree_cpp/condition_node.h>
#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/battery_state.hpp>

class BatteryLow : public BT::ConditionNode
{
public:
    BatteryLow(const std::string &name, const BT::NodeConfiguration &config);

    static BT::PortsList providedPorts();

    BT::NodeStatus tick() override;

private:
    rclcpp::Node::SharedPtr node_;
    rclcpp::Subscription<sensor_msgs::msg::BatteryState>::SharedPtr battery_sub_;
    float battery_level_;
    int threshold_ = 20; // default threshold %

    void batteryCallback(const sensor_msgs::msg::BatteryState::SharedPtr msg);

};

#endif // BATTERY_LOW_NODE_HPP