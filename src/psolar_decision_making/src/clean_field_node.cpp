#include "psolar_decision_making/clean_field_node.hpp"

NavigateCoverage::NavigateCoverage(const std::string &name, const BT::NodeConfiguration &config)
    : BT::SyncActionNode(name, config)
{
    node_ = rclcpp::Node::make_shared("navigate_coverage_node");
    action_client_ = rclcpp_action::create_client<CoverageAction>(node_, "navigate_complete_coverage");
}

BT::PortsList NavigateCoverage::providedPorts()
{
    return { 
        BT::InputPort<opennav_coverage_msgs::msg::Coordinates>("field") 
    };
}


BT::NodeStatus NavigateCoverage::tick()
{
    opennav_coverage_msgs::msg::Coordinates coords;
    if (!getInput("field", coords)) {
        RCLCPP_ERROR(node_->get_logger(), "No field provided to NavigateCoverage");
        return BT::NodeStatus::FAILURE;
    }

    // Convert Coordinates to Polygon
    geometry_msgs::msg::Polygon field;
    for (auto &coord : coords.coordinates) {
        geometry_msgs::msg::Point32 pt;
        pt.x = coord.axis1;
        pt.y = coord.axis2;
        pt.z = 0.0;
        field.points.push_back(pt);
    }
    if (!field.points.empty())
        field.points.push_back(field.points.front()); // close polygon



    RCLCPP_INFO(node_->get_logger(), "Navigating coverage for field with %zu points", field.points.size());

    // --- Wait for action server ---
    if (!action_client_->wait_for_action_server(std::chrono::seconds(5))) {
        RCLCPP_ERROR(node_->get_logger(), "Coverage action server not available");
        return BT::NodeStatus::FAILURE;
    }

    // --- Fill action goal ---
    CoverageAction::Goal goal_msg;
    goal_msg.frame_id = "map";
    goal_msg.polygons.push_back(field);

    // --- Send goal asynchronously ---
    auto goal_handle_future = action_client_->async_send_goal(goal_msg);
    if (rclcpp::spin_until_future_complete(node_, goal_handle_future) != rclcpp::FutureReturnCode::SUCCESS) {
        RCLCPP_ERROR(node_->get_logger(), "Failed to send coverage goal");
        return BT::NodeStatus::FAILURE;
    }

    auto goal_handle = goal_handle_future.get();
    if (!goal_handle) {
        RCLCPP_ERROR(node_->get_logger(), "Coverage goal was rejected by server");
        return BT::NodeStatus::FAILURE;
    }

    // --- Wait for result ---
    auto result_future = action_client_->async_get_result(goal_handle);
    if (rclcpp::spin_until_future_complete(node_, result_future) != rclcpp::FutureReturnCode::SUCCESS) {
        RCLCPP_ERROR(node_->get_logger(), "Failed to get coverage result");
        return BT::NodeStatus::FAILURE;
    }

    auto wrapped_result = result_future.get();
    switch (wrapped_result.code) {
        case rclcpp_action::ResultCode::SUCCEEDED:
            RCLCPP_INFO(node_->get_logger(), "Coverage completed successfully");
            return BT::NodeStatus::SUCCESS;
        case rclcpp_action::ResultCode::ABORTED:
            RCLCPP_ERROR(node_->get_logger(), "Coverage was aborted");
            return BT::NodeStatus::FAILURE;
        case rclcpp_action::ResultCode::CANCELED:
            RCLCPP_ERROR(node_->get_logger(), "Coverage was canceled");
            return BT::NodeStatus::FAILURE;
        default:
            RCLCPP_ERROR(node_->get_logger(), "Unknown coverage result code");
            return BT::NodeStatus::FAILURE;
    }
}
