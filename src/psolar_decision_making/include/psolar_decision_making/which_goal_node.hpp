#pragma once

#include <behaviortree_cpp/action_node.h>
#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/pose_stamped.hpp"
#include "opennav_coverage_msgs/msg/fields.hpp"

class WhichGoal : public BT::SyncActionNode
{
public:
    WhichGoal(const std::string &name, const BT::NodeConfiguration &config);

    static BT::PortsList providedPorts();

    BT::NodeStatus tick() override;
    
private:
    bool first_panel_found_;


};
