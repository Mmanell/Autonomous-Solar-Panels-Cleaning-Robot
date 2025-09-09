#pragma once
#include <string>
#include <memory>
#include <list>
#include <vector>
#include <algorithm>
#include "rclcpp/rclcpp.hpp"
#include "nav2_core/global_planner.hpp"
#include "nav_msgs/msg/path.hpp"
#include "geometry_msgs/msg/pose_stamped.hpp"
#include "tf2_ros/buffer.h"
#include "nav2_costmap_2d/costmap_2d_ros.hpp"
#include "nav2_util/lifecycle_node.hpp"
#include "nav2_util/node_utils.hpp"
#include <visualization_msgs/msg/marker.hpp>
#include <visualization_msgs/msg/marker_array.hpp>

namespace psolar_navigation
{

struct Point_t
{
  int x;
  int y;
};

struct CoverageMetrics
{
  int visited_counter{0};
  int multiple_pass_counter{0};
  int accessible_counter{0};
  double total_area_covered{0.0};
};

class CoveragePlanner : public nav2_core::GlobalPlanner
{
public:
  CoveragePlanner() = default;
  ~CoveragePlanner() override = default;

  void configure(
    const rclcpp_lifecycle::LifecycleNode::WeakPtr & parent,
    std::string name,
    std::shared_ptr<tf2_ros::Buffer> tf,
    std::shared_ptr<nav2_costmap_2d::Costmap2DROS> costmap_ros) override;

  void cleanup() override;
  void activate() override;
  void deactivate() override;

  nav_msgs::msg::Path createPlan(
    const geometry_msgs::msg::PoseStamped & start,
    const geometry_msgs::msg::PoseStamped & goal) override;

private:
  // config/state
  double interpolation_resolution_{0.1};
  std::shared_ptr<tf2_ros::Buffer> tf_;
  nav2_util::LifecycleNode::SharedPtr node_;
  nav2_costmap_2d::Costmap2D * costmap_{nullptr};
  std::string global_frame_, name_;
  bool initialized_{false};

  // Robot/tool parameters (meters)
  double robot_radius_{0.22};   // example default for waffle ~0.22 m (adjust if needed)
  double tool_radius_{0.22 * 1.3}; // effective tool radius (robot_radius * 1.3)

  // Coverage metrics
  CoverageMetrics zigzag_fill_metrics_;

  // Grid and visited map (optional class members)
  std::vector<std::vector<bool>> grid_;
  std::vector<std::vector<bool>> visited_;

  // Methods
  bool worldToMap(double wx, double wy, unsigned int &mx, unsigned int &my);
  void mapToWorld(unsigned int mx, unsigned int my, double &wx, double &wy);

  // Helper to convert Point_t list to nav_msgs::msg::Path
  void parsePointlist2Plan(
    const geometry_msgs::msg::PoseStamped & start,
    const std::list<Point_t> & points,
    nav_msgs::msg::Path & path);

  // Zigzag fill (kept for backwards compatibility if you want it)
  std::list<Point_t> zigzag_fill(
    const std::vector<std::vector<bool>> & grid,
    Point_t & start,
    std::vector<std::vector<bool>> & visited);

  // New sweep-by-tool-width function (used in your .cpp)
  std::list<Point_t> sweep_by_tool_width(
    const std::vector<std::vector<bool>> & grid,
    Point_t & start,
    std::vector<std::vector<bool>> & visited,
    double tool_width_m);
    
  visualization_msgs::msg::Marker createPointMarker(const Point_t &p, std::string frame_id);

  rclcpp::Publisher<visualization_msgs::msg::MarkerArray>::SharedPtr marker_pub_;

};

}  // namespace psolar_navigation
