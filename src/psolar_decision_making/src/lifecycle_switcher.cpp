#include "rclcpp/rclcpp.hpp"
#include "lifecycle_msgs/srv/change_state.hpp"
#include "lifecycle_msgs/msg/transition.hpp"

using namespace std::chrono_literals;

class LifecycleSwitcher : public rclcpp::Node
{
public:
  LifecycleSwitcher() : Node("lifecycle_switcher")
  {
    // Example usage: deactivate coverage, activate bt_navigator
    switch_nodes();
  }

  void switch_nodes()
  {
    auto coverage_client = this->create_client<lifecycle_msgs::srv::ChangeState>("/coverage_server/change_state");
    auto navigator_client = this->create_client<lifecycle_msgs::srv::ChangeState>("/bt_navigator/change_state");

    // Wait for services
    coverage_client->wait_for_service();
    navigator_client->wait_for_service();

    // Deactivate coverage_server
    auto req_deactivate = std::make_shared<lifecycle_msgs::srv::ChangeState::Request>();
    req_deactivate->transition.id = lifecycle_msgs::msg::Transition::TRANSITION_DEACTIVATE;
    auto f1 = coverage_client->async_send_request(req_deactivate);

    // Activate bt_navigator
    auto req_activate = std::make_shared<lifecycle_msgs::srv::ChangeState::Request>();
    req_activate->transition.id = lifecycle_msgs::msg::Transition::TRANSITION_ACTIVATE;
    auto f2 = navigator_client->async_send_request(req_activate);
  }
};

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<LifecycleSwitcher>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}
