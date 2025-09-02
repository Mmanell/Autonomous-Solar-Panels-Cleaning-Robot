#pragma once

#include <behaviortree_cpp/bt_factory.h>
#include "rclcpp/rclcpp.hpp"

class UndockAction : public BT::SyncActionNode
{
public:
    UndockAction(const std::string& name, const BT::NodeConfig& config);

    static BT::PortsList providedPorts();

    BT::NodeStatus tick() override;
};


