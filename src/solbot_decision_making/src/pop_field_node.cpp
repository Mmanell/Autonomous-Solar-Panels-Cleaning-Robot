#include "solbot_decision_making/pop_field_node.hpp"
#include <iostream>

PopField::PopField(const std::string &name, const BT::NodeConfiguration &config)
    : BT::SyncActionNode(name, config)
{
    // Try to get shared node from blackboard
   node_ = config.blackboard->get<rclcpp::Node::SharedPtr>("node");
   //node_ = rclcpp::Node::make_shared("pop_field_node");
}

BT::PortsList PopField::providedPorts()
{
    return {
        BT::InputPort<opennav_coverage_msgs::msg::Fields>("planned_fields"),
        BT::OutputPort<opennav_coverage_msgs::msg::Fields>("remaining_fields")
    };
}

BT::NodeStatus PopField::tick()
{
    opennav_coverage_msgs::msg::Fields planned_fields;
;

    if (!getInput("planned_fields", planned_fields)) {
        RCLCPP_ERROR(node_->get_logger(), "PopField: No planned_fields on blackboard");
        return BT::NodeStatus::FAILURE;
    }

    if (planned_fields.fields.empty()) {
        RCLCPP_INFO(node_->get_logger(), "PopField: planned_fields is empty, nothing to pop");
        return BT::NodeStatus::FAILURE;
    }


    if (!initialized_) {
        remaining_fields_ = planned_fields;
        initialized_ = true;
        if (!setOutput("remaining_fields", planned_fields)) {
            RCLCPP_ERROR(node_->get_logger(), "PopField: Failed to update planned_fields");
            return BT::NodeStatus::FAILURE;
        }
        return BT::NodeStatus::SUCCESS;
    }

    if (remaining_fields_.fields.empty()) {
        RCLCPP_INFO(node_->get_logger(), "PopField: No remaining fields left to pop");
        return BT::NodeStatus::FAILURE;
    }

    // Remove the first field
    remaining_fields_.fields.erase(remaining_fields_.fields.begin());

    // Write back updated list
    if (!setOutput("remaining_fields", remaining_fields_)) {
        RCLCPP_ERROR(node_->get_logger(), "PopField: Failed to update planned_fields");
        return BT::NodeStatus::FAILURE;
    }

    //RCLCPP_INFO(node_->get_logger(), "PopField: Removed first field, %zu remaining", planned_fields.fields.size());
    return BT::NodeStatus::SUCCESS;
}
