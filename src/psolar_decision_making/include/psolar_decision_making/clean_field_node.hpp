#pragma once

#include <behaviortree_cpp/action_node.h>
#include <rclcpp/rclcpp.hpp>
#include <rclcpp_action/rclcpp_action.hpp>
#include "geometry_msgs/msg/polygon.hpp"
#include "opennav_coverage_msgs/action/navigate_complete_coverage.hpp"
#include "opennav_coverage_msgs/msg/coordinates.hpp"

using CoverageAction = opennav_coverage_msgs::action::NavigateCompleteCoverage;

class NavigateCoverage : public BT::SyncActionNode
{
public:
    NavigateCoverage(const std::string &name, const BT::NodeConfiguration &config);

    static BT::PortsList providedPorts();

    BT::NodeStatus tick() override;

private:
    rclcpp::Node::SharedPtr node_;
    rclcpp_action::Client<CoverageAction>::SharedPtr action_client_;
};
