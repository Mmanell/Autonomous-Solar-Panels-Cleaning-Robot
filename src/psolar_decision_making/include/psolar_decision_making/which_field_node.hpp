#pragma once

#include <behaviortree_cpp/action_node.h>
#include "opennav_coverage_msgs/msg/fields.hpp"
#include "geometry_msgs/msg/polygon.hpp"
#include <vector>

class WhichField : public BT::SyncActionNode
{
public:
    WhichField(const std::string &name, const BT::NodeConfiguration &config);

    static BT::PortsList providedPorts();
    
    BT::NodeStatus tick() override;
};
