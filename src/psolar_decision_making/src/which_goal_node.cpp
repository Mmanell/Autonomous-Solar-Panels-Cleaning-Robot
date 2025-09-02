#include "psolar_decision_making/which_goal_node.hpp"
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
        BT::InputPort<opennav_coverage_msgs::msg::Fields>("planned_fields") 
    };
}

BT::NodeStatus WhichGoal::tick()
{
    opennav_coverage_msgs::msg::Fields planned_fields;
    if (!getInput("planned_fields", planned_fields))
    {
        std::cerr << "WhichGoal: failed to get planned_fields input" << std::endl;
        return BT::NodeStatus::FAILURE;
    }

    if (planned_fields.fields.empty())
    {
        std::cerr << "WhichGoal: no fields to process" << std::endl;
        return BT::NodeStatus::FAILURE;
    }

    if (!first_panel_found_)
    {
        // Take first panel
        auto &field = planned_fields.fields.front();

        geometry_msgs::msg::PoseStamped approach_pose1;
        geometry_msgs::msg::PoseStamped approach_pose2;

        double x_offset = 1.0; // adjust as needed
        double y_offset = 1.0; // adjust as needed

        // --- First pose: move along x ---
        approach_pose1.header.frame_id = "map";
        approach_pose1.pose.position.x = field.coordinates[0].axis1 + x_offset;
        approach_pose1.pose.position.y = field.coordinates[0].axis2;
        approach_pose1.pose.position.z = 0.0;
        double yaw1 = M_PI / 2.0; // facing along x
        approach_pose1.pose.orientation.z = sin(yaw1/2.0);
        approach_pose1.pose.orientation.w = cos(yaw1/2.0);

        // --- Second pose: move along y ---
        approach_pose2.header.frame_id = "map";
        approach_pose2.pose.position.x = field.coordinates[0].axis1 + x_offset;
        approach_pose2.pose.position.y = field.coordinates[0].axis2 + y_offset;
        approach_pose2.pose.position.z = 0.0;
        double yaw2 = M_PI / 2.0; // facing along y
        approach_pose2.pose.orientation.z = sin(yaw2/2.0);
        approach_pose2.pose.orientation.w = cos(yaw2/2.0);

        // Set outputs
        if (!setOutput("goal1", approach_pose1))
        {
            std::cerr << "WhichGoal: failed to set goal1 output" << std::endl;
            return BT::NodeStatus::FAILURE;
        }

        if (!setOutput("goal2", approach_pose2))
        {
            std::cerr << "WhichGoal: failed to set goal2 output" << std::endl;
            return BT::NodeStatus::FAILURE;
        }

        first_panel_found_ = true;

        std::cout << "WhichGoal: output goal1 and goal2 for first panel" << std::endl;
    }

    return BT::NodeStatus::SUCCESS;
}
