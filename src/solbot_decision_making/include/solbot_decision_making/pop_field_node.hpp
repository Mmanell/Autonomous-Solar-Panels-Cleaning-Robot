#pragma once

#include <behaviortree_cpp/action_node.h>
#include <rclcpp/rclcpp.hpp>
#include "opennav_coverage_msgs/msg/fields.hpp"

class PopField : public BT::SyncActionNode
{
public:
    PopField(const std::string &name, const BT::NodeConfiguration &config);

    static BT::PortsList providedPorts();

    BT::NodeStatus tick() override;

private:

    rclcpp::Node::SharedPtr node_;
    bool initialized_ = false;
    opennav_coverage_msgs::msg::Fields remaining_fields_;

};
