#include "psolar_decision_making/which_field_node.hpp"
#include <rclcpp/rclcpp.hpp>

WhichField::WhichField(const std::string &name, const BT::NodeConfiguration &config)
    : BT::SyncActionNode(name, config)
{
    // No ROS subscriptions needed now
}

BT::PortsList WhichField::providedPorts()
{
    return { 
        BT::InputPort<opennav_coverage_msgs::msg::Fields>("planned_fields"),
        BT::OutputPort<opennav_coverage_msgs::msg::Coordinates>("field") 
    };
}

BT::NodeStatus WhichField::tick()
{
    opennav_coverage_msgs::msg::Fields planned_fields;
    if (!getInput("planned_fields", planned_fields))
        return BT::NodeStatus::FAILURE;

    if (planned_fields.fields.empty())
        return BT::NodeStatus::FAILURE;

    // Take first field (Coordinates)
    auto first_field = planned_fields.fields.front();

    if (!setOutput("field", first_field))
        return BT::NodeStatus::FAILURE;

    return BT::NodeStatus::SUCCESS;
}

