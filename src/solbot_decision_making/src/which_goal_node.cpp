#include "solbot_decision_making/which_goal_node.hpp"
#include <iostream>
#include <cmath>

WhichGoal::WhichGoal(const std::string &name, const BT::NodeConfiguration &config)
    : BT::SyncActionNode(name, config)
{
    first_panel_found_ = false;
}

BT::PortsList WhichGoal::providedPorts()
{
    return { 
        BT::OutputPort<geometry_msgs::msg::PoseStamped>("goal1"),
        BT::OutputPort<geometry_msgs::msg::PoseStamped>("goal2"),
        BT::InputPort<opennav_coverage_msgs::msg::Fields>("remaining_fields") 
    };
}

BT::NodeStatus WhichGoal::tick()
{
    opennav_coverage_msgs::msg::Fields remaining_fields;
    if (!getInput("remaining_fields", remaining_fields)) return BT::NodeStatus::FAILURE;
    if (remaining_fields.fields.empty()) return BT::NodeStatus::FAILURE;

    auto &field = remaining_fields.fields.front(); // always the first remaining field

    geometry_msgs::msg::PoseStamped approach_pose1, approach_pose2;
    double x_offset = 0.2, y_offset = 0.5;

    approach_pose1.header.frame_id = "map";
    approach_pose1.pose.position.x = field.coordinates[0].axis1 + x_offset;
    approach_pose1.pose.position.y = 0.0;
    approach_pose1.pose.position.z = 0.0;
    double yaw1 = M_PI/2.0;
    approach_pose1.pose.orientation.z = sin(yaw1/2.0);
    approach_pose1.pose.orientation.w = cos(yaw1/2.0);

    approach_pose2.header.frame_id = "map";
    approach_pose2.pose.position.x = field.coordinates[0].axis1 + x_offset;
    approach_pose2.pose.position.y = field.coordinates[0].axis2 + y_offset;
    approach_pose2.pose.position.z = 0.0;
    double yaw2 = M_PI/2.0;
    approach_pose2.pose.orientation.z = sin(yaw2/2.0);
    approach_pose2.pose.orientation.w = cos(yaw2/2.0);

    setOutput("goal1", approach_pose1);
    setOutput("goal2", approach_pose2);

    return BT::NodeStatus::SUCCESS;
}

