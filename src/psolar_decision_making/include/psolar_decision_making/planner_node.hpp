#pragma once

#include <behaviortree_cpp/action_node.h>
#include <rclcpp/rclcpp.hpp>
#include "opennav_coverage_msgs/msg/fields.hpp"
#include "opennav_coverage_msgs/msg/coordinates.hpp"
#include "opennav_coverage_msgs/msg/coordinate.hpp"
#include "yaml-cpp/yaml.h"
#include <string>
#include <vector>

class Planner : public BT::SyncActionNode
{
public:
    Planner(const std::string &name, const BT::NodeConfiguration &config);

    static BT::PortsList providedPorts();
    BT::NodeStatus tick() override;

private:
    rclcpp::Node::SharedPtr node_;

    // YAML file paths for panels and panels to clean
    std::string fields_yaml_file_;
    std::string to_clean_yaml_file_;
};
