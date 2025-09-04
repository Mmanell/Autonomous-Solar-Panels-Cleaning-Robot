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
        BT::InputPort<opennav_coverage_msgs::msg::Fields>("remaining_fields"),
        BT::OutputPort<opennav_coverage_msgs::msg::Coordinates>("field") ,
        BT::OutputPort<geometry_msgs::msg::PoseStamped>("goal3") 
    };
}

BT::NodeStatus WhichField::tick()
{
    opennav_coverage_msgs::msg::Fields remaining_fields;
    if (!getInput("remaining_fields", remaining_fields))
        return BT::NodeStatus::FAILURE;

    if (remaining_fields.fields.empty())
        return BT::NodeStatus::FAILURE;

    // Take first field (Coordinates)
    auto first_field = remaining_fields.fields.front();

    geometry_msgs::msg::PoseStamped finish_pose;

    finish_pose.header.frame_id = "map";
    finish_pose.pose.position.x = first_field.coordinates[1].axis1-0.1;
    finish_pose.pose.position.y = 0.0;
    finish_pose.pose.position.z = 0.0;
    double yaw2 = 0.0; // facing along y
    finish_pose.pose.orientation.z = sin(yaw2/2.0);
    finish_pose.pose.orientation.w = cos(yaw2/2.0);

        // Set outputs
    if (!setOutput("goal3", finish_pose))
    {
        std::cerr << "WhichGoal: failed to set goal1 output" << std::endl;
        return BT::NodeStatus::FAILURE;
    }

    if (!setOutput("field", first_field)){

        return BT::NodeStatus::FAILURE;

    }
    

    return BT::NodeStatus::SUCCESS;
}

