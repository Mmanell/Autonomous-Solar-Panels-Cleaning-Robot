#include "psolar_decision_making/dock_node.hpp"

DockRobotNode::DockRobotNode(const std::string &name, const BT::NodeConfiguration &config)
    : BT::SyncActionNode(name, config)
{
    // Create ROS2 node
    node_ = rclcpp::Node::make_shared("dock_robot_node");

    // Create action client for DockRobot
    client_ = rclcpp_action::create_client<DockRobot>(node_, "/goto_pose/dock_robot");
}

BT::NodeStatus DockRobotNode::tick()
{


    RCLCPP_INFO(node_->get_logger(), "Waiting for 'DockRobot' action server...");
    while (!client_->wait_for_action_server(std::chrono::seconds(1))) {
        RCLCPP_WARN(node_->get_logger(), "'DockRobot' action server not available, waiting...");
    }

    auto goal_msg = DockRobot::Goal();
    goal_msg.use_dock_id = true;
    goal_msg.dock_id = "dock0";
    goal_msg.dock_type = "rosmaster_x3_dock";
    goal_msg.max_staging_time = 1000.0f;
    goal_msg.navigate_to_staging_pose = true;


    auto send_goal_options = rclcpp_action::Client<DockRobot>::SendGoalOptions();
    send_goal_options.feedback_callback =
        std::bind(&DockRobotNode::feedback_callback, this, std::placeholders::_1, std::placeholders::_2);

    auto goal_handle_future = client_->async_send_goal(goal_msg, send_goal_options);

    if (rclcpp::spin_until_future_complete(node_, goal_handle_future) != rclcpp::FutureReturnCode::SUCCESS) {
        RCLCPP_ERROR(node_->get_logger(), "Send goal call failed");
        return BT::NodeStatus::FAILURE;
    }

    auto goal_handle = goal_handle_future.get();
    if (!goal_handle) {
        RCLCPP_ERROR(node_->get_logger(), "Docking request was rejected!");
        return BT::NodeStatus::FAILURE;
    }

    // Wait for result
    auto result_future = client_->async_get_result(goal_handle);
    if (rclcpp::spin_until_future_complete(node_, result_future) != rclcpp::FutureReturnCode::SUCCESS) {
        RCLCPP_ERROR(node_->get_logger(), "Failed to get docking result");
        return BT::NodeStatus::FAILURE;
    }

    auto result = result_future.get();
    switch (result.code) {
        case rclcpp_action::ResultCode::SUCCEEDED:
            RCLCPP_INFO(node_->get_logger(), "Docking succeeded!");
            return BT::NodeStatus::SUCCESS;
        case rclcpp_action::ResultCode::ABORTED:
            RCLCPP_ERROR(node_->get_logger(), "Docking aborted");
            return BT::NodeStatus::FAILURE;
        case rclcpp_action::ResultCode::CANCELED:
            RCLCPP_ERROR(node_->get_logger(), "Docking canceled");
            return BT::NodeStatus::FAILURE;
        default:
            RCLCPP_ERROR(node_->get_logger(), "Unknown docking result code");
            return BT::NodeStatus::FAILURE;
    }
}

void DockRobotNode::feedback_callback(
    GoalHandleDockRobot::SharedPtr,
    const std::shared_ptr<const DockRobot::Feedback> feedback)
{
    RCLCPP_INFO(node_->get_logger(), "Docking feedback: state=%u, retries=%u, time=%d.%u sec",
                feedback->state,
                feedback->num_retries,
                feedback->docking_time.sec,
                feedback->docking_time.nanosec);
}
