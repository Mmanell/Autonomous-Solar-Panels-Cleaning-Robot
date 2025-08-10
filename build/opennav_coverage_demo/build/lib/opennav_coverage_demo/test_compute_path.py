#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from opennav_coverage_msgs.action import ComputeCoveragePath
from nav_msgs.msg import Path
from geometry_msgs.msg import Point32
from opennav_coverage_msgs.msg import Coordinates, Coordinate
import os
from rclpy.qos import QoSProfile, QoSDurabilityPolicy

class CoveragePathClient(Node):
    def __init__(self):
        super().__init__('coverage_path_client')
        self._client = ActionClient(self, ComputeCoveragePath, 'compute_coverage_path')
        qos_profile = QoSProfile(depth=10)
        qos_profile.durability = QoSDurabilityPolicy.TRANSIENT_LOCAL
        self._path_publisher = self.create_publisher(Path, '/planned_path', qos_profile)
    def send_coverage_goal(self, polygon_coords, save_csv_path=None):
        self.get_logger().info('Waiting for compute_coverage_path action server...')
        self._client.wait_for_server()

        polygons = []
        coords_msg = Coordinates()
        for x, y in polygon_coords:
            coord = Coordinate()
            coord.axis1 = float(x)
            coord.axis2 = float(y)
            coords_msg.coordinates.append(coord)
        polygons.append(coords_msg)

        goal_msg = ComputeCoveragePath.Goal()
        goal_msg.generate_headland = True
        goal_msg.generate_route = True
        goal_msg.generate_path = True
        goal_msg.swath_mode.mode = "UNKNOWN"
        goal_msg.route_mode.mode = "DEFAULT"
        goal_msg.headland_mode.mode = "NONE"
        goal_msg.path_mode.mode = "DEFAULT"
        goal_msg.path_mode.continuity_mode = "DEFAULT"
        goal_msg.use_gml_file = False
        goal_msg.polygons = polygons
        goal_msg.frame_id = 'map_tilted'

        self.get_logger().info('Sending coverage path goal...')
        send_goal_future = self._client.send_goal_async(goal_msg)
        rclpy.spin_until_future_complete(self, send_goal_future)
        goal_handle = send_goal_future.result()

        if not goal_handle.accepted:
            self.get_logger().error('Goal rejected by server')
            return False

        self.get_logger().info('Goal accepted, waiting for result...')
        result_future = goal_handle.get_result_async()
        rclpy.spin_until_future_complete(self, result_future)

        result = result_future.result().result
        nav_path = result.nav_path

        self.get_logger().info(f'Number of poses in nav_path: {len(nav_path.poses)}')

        # Publish the path
        self._path_publisher.publish(nav_path)
        self.get_logger().info('Published nav_path to coverage_nav_path topic')

   

        return True

    def quaternion_to_yaw(self, x, y, z, w):
        # Convert quaternion to yaw (theta)
        import math
        siny_cosp = 2.0 * (w * z + x * y)
        cosy_cosp = 1.0 - 2.0 * (y * y + z * z)
        return math.atan2(siny_cosp, cosy_cosp)


def main(args=None):
    rclpy.init(args=args)
    node = CoveragePathClient()

    # Example polygon (square)
    polygon = [
        [0.0, 0.0],
        [5.0, 0.0],
        [5.0, 5.0],
        [0.0, 5.0],
        [0.0, 0.0]
    ]

    # Optional: Define path to save CSV
    save_path = os.path.expanduser('~/coverage_path.csv')

    success = node.send_coverage_goal(polygon)

    if success:
        node.get_logger().info('Coverage path computed, published, and saved successfully')
    else:
        node.get_logger().error('Failed to compute coverage path')

    rclpy.spin_once(node, timeout_sec=2)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
