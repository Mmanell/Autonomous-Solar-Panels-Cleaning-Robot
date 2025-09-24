#include "solbot_decision_making/navigate_to_goal_node.hpp"

NavigateToGoal::NavigateToGoal(const std::string &name, const BT::NodeConfiguration &config)
    : BT::SyncActionNode(name, config)
{
    // Create ROS2 node 
    node_ = rclcpp::Node::make_shared("navigate_to_goal_node");

    // Create action client for NavigateToPose
    client_ = rclcpp_action::create_client<nav2_msgs::action::NavigateToPose>(
        node_, "/goto_pose/navigate_to_pose");
}

BT::PortsList NavigateToGoal::providedPorts()
{
    return { BT::InputPort<geometry_msgs::msg::PoseStamped>("goal") };
}

BT::NodeStatus NavigateToGoal::tick()
{
    // --- Get goal from BT blackboard ---
    geometry_msgs::msg::PoseStamped goal;
    if (!getInput("goal", goal)) {
        RCLCPP_ERROR(node_->get_logger(), "No goal provided to NavigateToGoal");
        return BT::NodeStatus::FAILURE;
    }

    RCLCPP_INFO(node_->get_logger(), "Navigating to goal: x=%.2f, y=%.2f", 
                goal.pose.position.x, goal.pose.position.y);

    // --- Wait for action server ---
    if (!client_->wait_for_action_server(std::chrono::seconds(5))) {
        RCLCPP_ERROR(node_->get_logger(), "NavigateToPose action server not available");
        return BT::NodeStatus::FAILURE;
    }

    // --- Fill action goal ---
    nav2_msgs::action::NavigateToPose::Goal nav_goal;
    nav_goal.pose = goal;

    // --- Send goal asynchronously ---
    auto goal_handle_future = client_->async_send_goal(nav_goal);
    if (rclcpp::spin_until_future_complete(node_, goal_handle_future) !=
        rclcpp::FutureReturnCode::SUCCESS) 
    {
        RCLCPP_ERROR(node_->get_logger(), "Failed to send goal");
        return BT::NodeStatus::FAILURE;
    }

    auto goal_handle = goal_handle_future.get();
    if (!goal_handle) {
        RCLCPP_ERROR(node_->get_logger(), "Goal was rejected by server");
        return BT::NodeStatus::FAILURE;
    }

    // --- Wait for result ---
    auto result_future = client_->async_get_result(goal_handle);
    if (rclcpp::spin_until_future_complete(node_, result_future) !=
        rclcpp::FutureReturnCode::SUCCESS)
    {
        RCLCPP_ERROR(node_->get_logger(), "Failed to get result");
        return BT::NodeStatus::FAILURE;
    }

    auto wrapped_result = result_future.get();
    switch (wrapped_result.code) {
        case rclcpp_action::ResultCode::SUCCEEDED:
            RCLCPP_INFO(node_->get_logger(), "Navigation succeeded");
            return BT::NodeStatus::SUCCESS;
        case rclcpp_action::ResultCode::ABORTED:
            RCLCPP_ERROR(node_->get_logger(), "Goal was aborted");
            return BT::NodeStatus::FAILURE;
        case rclcpp_action::ResultCode::CANCELED:
            RCLCPP_ERROR(node_->get_logger(), "Goal was canceled");
            return BT::NodeStatus::FAILURE;
        default:
            RCLCPP_ERROR(node_->get_logger(), "Unknown result code");
            return BT::NodeStatus::FAILURE;
    }
}
