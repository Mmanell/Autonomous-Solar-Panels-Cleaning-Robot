#include "solbot_navigation/coverage_path_planner.hpp"
#include <cmath>  // for std::hypot


namespace solbot_navigation
{
void CoveragePlanner::configure(
  const rclcpp_lifecycle::LifecycleNode::WeakPtr & parent,
  std::string name,
  std::shared_ptr<tf2_ros::Buffer> tf,
  std::shared_ptr<nav2_costmap_2d::Costmap2DROS> costmap_ros)
{
  node_ = parent.lock();
  name_ = name;
  tf_ = tf;
  costmap_ = costmap_ros->getCostmap();
  global_frame_ = costmap_ros->getGlobalFrameID();
  initialized_ = true;
  tool_radius_ = robot_radius_ * 1.3;
  marker_pub_ = node_->create_publisher<visualization_msgs::msg::MarkerArray>("coverage_points", 10);


  RCLCPP_INFO(node_->get_logger(), "CoveragePlanner configured");
}

void CoveragePlanner::cleanup() {}
void CoveragePlanner::activate() {}
void CoveragePlanner::deactivate() {}

std::list<Point_t> CoveragePlanner::zigzag_path_generator(
  const std::vector<std::vector<bool>> & grid,
  Point_t & start,
  std::vector<std::vector<bool>> & visited,
  double tool_width_m
)
{
  std::list<Point_t> fullPath;
  int nRows = static_cast<int>(grid.size());
  if (nRows == 0) return fullPath;
  int nCols = static_cast<int>(grid[0].size());
  double resolution = costmap_->getResolution();

  // compute spacing directly from tool width
  int spacing_cells = std::max(1, static_cast<int>(std::round(tool_width_m / resolution)));

  // metrics reset
  zigzag_fill_metrics_.visited_counter = 0;
  zigzag_fill_metrics_.multiple_pass_counter = 0;

  int sy = start.y;
  RCLCPP_INFO(node_->get_logger(),"Start row: %d", sy);

  // horizontal strips: generate row indices spaced by spacing_cells, starting from start row

  std::vector<int> strip_rows;
  for (int r = 0; r < nRows; r += spacing_cells){
      strip_rows.push_back(r);
  }

  // alternate left-to-right and right-to-left
  bool left_to_right = true;
  for (size_t si = 0; si < strip_rows.size(); ++si)
  {
    int row = strip_rows[si];
    if (row < 0 || row >= nRows) continue;

    if (left_to_right)
    {
      for (int col = 0; col < nCols; ++col)
      {
        if (!grid[row][col]) continue;

        if (!visited[row][col])
        { 
          visited[row][col] = true;
          fullPath.push_back({col, row});
          zigzag_fill_metrics_.visited_counter++;
        }
        else
        {
          zigzag_fill_metrics_.multiple_pass_counter++;
        }
      }
    }
    else
    {
      for (int col = nCols - 1; col >= 0; --col)
      {
        if (!grid[row][col]) continue;
        if (!visited[row][col])
        {
          visited[row][col] = true;
          fullPath.push_back({col, row});
          zigzag_fill_metrics_.visited_counter++;
        }
        else
        {
          zigzag_fill_metrics_.multiple_pass_counter++;
        }
      }
    }

    left_to_right = !left_to_right;
  }

  return fullPath;
}

void CoveragePlanner::parsePointlist2Plan(
  const geometry_msgs::msg::PoseStamped & start,
  const std::list<Point_t> & points,
  nav_msgs::msg::Path & path)
{
  path.header.frame_id = global_frame_;
  //path.header.stamp = rclcpp::Time(0);

  for (const auto & p : points)
  {
    geometry_msgs::msg::PoseStamped pose;
    mapToWorld(static_cast<unsigned int>(p.x), static_cast<unsigned int>(p.y),
               pose.pose.position.x, pose.pose.position.y);
    
    pose.pose.orientation.w = 1.0; // facing forward (no yaw)
    pose.header.frame_id = global_frame_;
    pose.header.stamp = node_->now();
    path.poses.push_back(pose);
  }
}

nav_msgs::msg::Path CoveragePlanner::createPlan(
  const geometry_msgs::msg::PoseStamped & start,
  const geometry_msgs::msg::PoseStamped & goal)
{
  nav_msgs::msg::Path plan;

  if (!initialized_)
  {
    RCLCPP_ERROR(node_->get_logger(),"This planner has not been initialized yet; call configure() first");
    return plan;
  }

  if (!costmap_)
  {
    RCLCPP_ERROR(node_->get_logger(), "Costmap pointer is null");
    return plan;
  }

  RCLCPP_INFO(node_->get_logger(),"Coverage Path Planning started");


  unsigned int goal_mx, goal_my;
  if (!worldToMap(goal.pose.position.x, goal.pose.position.y, goal_mx, goal_my))
  {
    RCLCPP_WARN(node_->get_logger(), "Goal pose outside map bounds, using map edge");
    goal_mx = costmap_->getSizeInCellsX() - 1;
    goal_my = costmap_->getSizeInCellsY() - 1;
  }

  unsigned int size_x = goal_mx;
  unsigned int size_y = goal_my;

  // Build a simple free-grid. If you want to honor the actual costmap,
  // replace this with reading costmap_->getCost(x,y) and thresholding.
  std::vector<std::vector<bool>> grid(size_y, std::vector<bool>(size_x, true));
  std::vector<std::vector<bool>> visited(size_y, std::vector<bool>(size_x, false));

  // Convert start pose to map indices
  unsigned int mx = 0, my = 0;
  if (!worldToMap(start.pose.position.x, start.pose.position.y, mx, my))
  {
    RCLCPP_WARN(node_->get_logger(), "Start pose outside map bounds, using (0,0)");
    mx = 0;
    my = 0;
  }

  Point_t startPoint;
  startPoint.x = static_cast<int>(mx);
  startPoint.y = static_cast<int>(my);

  clock_t begin = clock();


  double robot_diameter_m = 2.0 * robot_radius_;
  double tool_width_m = robot_diameter_m * 1.3;

  std::list<Point_t> pathPoints = zigzag_path_generator(
    grid, startPoint, visited, tool_width_m);



  RCLCPP_INFO(node_->get_logger(),"Coverage Path Planning completed!");
  RCLCPP_INFO(node_->get_logger(),"Converting path to plan");

  parsePointlist2Plan(start, pathPoints, plan);
  visualization_msgs::msg::MarkerArray marker_array;
  for (const auto & p : pathPoints)
  {
      visualization_msgs::msg::Marker marker = createPointMarker(p, global_frame_);
      marker_array.markers.push_back(marker);
  }
  if (marker_pub_)
      marker_pub_->publish(marker_array);

  zigzag_fill_metrics_.accessible_counter =
      zigzag_fill_metrics_.visited_counter - zigzag_fill_metrics_.multiple_pass_counter;
  zigzag_fill_metrics_.total_area_covered =
      (4.0 * tool_radius_ * tool_radius_) * zigzag_fill_metrics_.accessible_counter;

  RCLCPP_INFO(node_->get_logger(),"Total visited: %d", zigzag_fill_metrics_.visited_counter);
  RCLCPP_INFO(node_->get_logger(),"Total re-visited: %d", zigzag_fill_metrics_.multiple_pass_counter);
  RCLCPP_INFO(node_->get_logger(),"Total accessible cells: %d", zigzag_fill_metrics_.accessible_counter);
  RCLCPP_INFO(node_->get_logger(),"Total accessible area: %f", zigzag_fill_metrics_.total_area_covered);
  RCLCPP_INFO(node_->get_logger(),"Publishing plan");
  RCLCPP_INFO(node_->get_logger(), "Number of poses in plan: %zu", plan.poses.size());

  clock_t end = clock();
  double elapsed_secs = static_cast<double>(end - begin) / CLOCKS_PER_SEC;
  std::cout << "elapsed time: " << elapsed_secs << "\n";

  return plan;
}

bool CoveragePlanner::worldToMap(double wx, double wy, unsigned int &mx, unsigned int &my)
{
  if (!costmap_) return false;
  double dx = wx - costmap_->getOriginX();
  double dy = wy - costmap_->getOriginY();
  if (dx < 0.0 || dy < 0.0) return false;
  mx = static_cast<unsigned int>(dx / costmap_->getResolution());
  my = static_cast<unsigned int>(dy / costmap_->getResolution());
  return (mx < costmap_->getSizeInCellsX() && my < costmap_->getSizeInCellsY());
}

void CoveragePlanner::mapToWorld(unsigned int mx, unsigned int my, double &wx, double &wy)
{
  wx = mx * costmap_->getResolution() + costmap_->getOriginX() + costmap_->getResolution() / 2.0;
  wy = my * costmap_->getResolution() + costmap_->getOriginY() + costmap_->getResolution() / 2.0;
}

visualization_msgs::msg::Marker CoveragePlanner::createPointMarker(const Point_t &p, std::string frame_id)
{
    visualization_msgs::msg::Marker marker;
    marker.header.frame_id = frame_id;
    marker.header.stamp = rclcpp::Clock().now();
    marker.ns = "coverage_points";
    marker.id = p.y * 1000 + p.x; // unique id
    marker.type = visualization_msgs::msg::Marker::SPHERE;
    marker.action = visualization_msgs::msg::Marker::ADD;
    double wx, wy;
    mapToWorld(p.x, p.y, wx, wy);
    marker.pose.position.x = wx; // convert with mapToWorld if needed
    marker.pose.position.y = wy;
    marker.pose.position.z = 0.0;
    marker.pose.orientation.w = 1.0;
    marker.scale.x = 0.1;  // sphere radius
    marker.scale.y = 0.1;
    marker.scale.z = 0.1;
    marker.color.r = 0.0f;
    marker.color.g = 1.0f;
    marker.color.b = 0.0f;
    marker.color.a = 1.0f;
    return marker;
}

}  // namespace solbot_navigation

#include "pluginlib/class_list_macros.hpp"
PLUGINLIB_EXPORT_CLASS(solbot_navigation::CoveragePlanner, nav2_core::GlobalPlanner)
