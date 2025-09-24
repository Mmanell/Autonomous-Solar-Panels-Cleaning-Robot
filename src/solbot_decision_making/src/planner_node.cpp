#include "solbot_decision_making/planner_node.hpp"
#include <algorithm>
#include <iostream>

Planner::Planner(const std::string &name, const BT::NodeConfiguration &config)
    : BT::SyncActionNode(name, config)
{
    // Get shared ROS node from blackboard
    node_ = config.blackboard->get<rclcpp::Node::SharedPtr>("node");

    // Set default YAML paths (can later make these configurable via BT blackboard)
    fields_yaml_file_ = "src/solbot_decision_making/config/panels_fields.yaml";
    to_clean_yaml_file_ = "src/solbot_decision_making/config/panels_to_clean.yaml";
}

BT::PortsList Planner::providedPorts()
{
    return { BT::OutputPort<opennav_coverage_msgs::msg::Fields>("planned_fields") };
}

BT::NodeStatus Planner::tick()
{
    opennav_coverage_msgs::msg::Fields msg_all;

    try {
        YAML::Node panels_yaml = YAML::LoadFile(fields_yaml_file_);
        YAML::Node to_clean_yaml = YAML::LoadFile(to_clean_yaml_file_);

        // Load panel IDs to clean
        std::vector<std::string> panels_to_clean;
        for (const auto &id_node : to_clean_yaml["panels_to_clean"]) {
            panels_to_clean.push_back(std::to_string(id_node.as<int>()));
        }

        // Iterate over all panels
        for (auto it = panels_yaml["panels"].begin(); it != panels_yaml["panels"].end(); ++it)
        {
            std::string panel_id = it->first.as<std::string>();
            if (std::find(panels_to_clean.begin(), panels_to_clean.end(), panel_id) == panels_to_clean.end())
                continue;  // Skip panels not in the to-clean list

            auto panel = it->second;
            auto field = panel["field"];
            opennav_coverage_msgs::msg::Coordinates field_msg;

            for (const auto &pt : field)
            {
                opennav_coverage_msgs::msg::Coordinate c;
                c.axis1 = pt[0].as<float>();
                c.axis2 = pt[1].as<float>();
                field_msg.coordinates.push_back(c);
            }
            msg_all.fields.push_back(field_msg);
        }

    } catch (const std::exception &e) {
        RCLCPP_ERROR(node_->get_logger(), "Planner: Failed to load YAML: %s", e.what());
        return BT::NodeStatus::FAILURE;
    }

    // Set the planned fields on the blackboard output port
    if (!setOutput("planned_fields", msg_all)) {
        RCLCPP_ERROR(node_->get_logger(), "Planner: Failed to set output planned_fields");
        return BT::NodeStatus::FAILURE;
    }

    RCLCPP_INFO(node_->get_logger(), "Planner: %zu fields planned", msg_all.fields.size());
    return BT::NodeStatus::SUCCESS;
}
