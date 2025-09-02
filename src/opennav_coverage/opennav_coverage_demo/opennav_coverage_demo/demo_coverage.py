#! /usr/bin/env python3
# Copyright 2023 Open Navigation LLC
#
# Licensed under the Apache License, Version 2.0 (the "License");
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.

from enum import Enum
import time
from nav2_msgs.action import NavigateToPose
from action_msgs.msg import GoalStatus
from geometry_msgs.msg import Point32, Polygon
from lifecycle_msgs.srv import GetState
from opennav_coverage_msgs.action import NavigateCompleteCoverage
import rclpy
from rclpy.action import ActionClient
from rclpy.duration import Duration
from rclpy.node import Node
from opennav_coverage_msgs.msg import Fields
from rclpy.qos import QoSProfile, ReliabilityPolicy, DurabilityPolicy


class TaskResult(Enum):
    UNKNOWN = 0
    SUCCEEDED = 1
    CANCELED = 2
    FAILED = 3


class CoverageNavigatorTester(Node):

    def __init__(self):
        super().__init__(node_name='coverage_navigator_tester')

        # Coverage action client
        self.coverage_client = ActionClient(self, NavigateCompleteCoverage, 'navigate_complete_coverage')

        # Pose action client
        self.pose_client = ActionClient(self, NavigateToPose, '/goto_pose/navigate_to_pose')

        # Field subscription
        qos_profile = QoSProfile(
            depth=10,
            reliability=ReliabilityPolicy.RELIABLE,
            durability=DurabilityPolicy.TRANSIENT_LOCAL
        )
        self.subscription = self.create_subscription(
            Fields,
            'field_topic',  # same topic your C++ publisher uses
            self.field_callback,
            qos_profile
        )
        self.received_fields = []

        # Feedback tracking
        self.pose_feedback = None
        self.coverage_feedback = None

    def field_callback(self, msg: Fields):
        self.received_fields = []
        for coordinates_msg in msg.fields:
            field = []
            for coord in coordinates_msg.coordinates:
                field.append([coord.axis1, coord.axis2])
            self.received_fields.append(field)
        self.get_logger().info(f"Received {len(self.received_fields)} fields")

    def toPolygon(self, field):
        poly = Polygon()
        for coord in field:
            pt = Point32()
            pt.x = coord[0]
            pt.y = coord[1]
            poly.points.append(pt)
        return poly

    # ------------------ Coverage navigation ------------------
    def navigateCoverage(self, field):
        """Send a coverage goal and wait until completion"""
        self.coverage_client.wait_for_server()
        goal_msg = NavigateCompleteCoverage.Goal()
        goal_msg.frame_id = 'map'
        goal_msg.polygons.append(self.toPolygon(field))

        send_goal_future = self.coverage_client.send_goal_async(goal_msg, self.coverage_feedback_callback)
        rclpy.spin_until_future_complete(self, send_goal_future)
        goal_handle = send_goal_future.result()
        if not goal_handle.accepted:
            self.get_logger().error("Coverage goal rejected")
            return False

        result_future = goal_handle.get_result_async()
        rclpy.spin_until_future_complete(self, result_future)
        result = result_future.result()

        if result.status == GoalStatus.STATUS_SUCCEEDED:
            self.get_logger().info("Coverage completed successfully")
            return True
        else:
            self.get_logger().error(f"Coverage failed with status {result.status}")
            return False

    def coverage_feedback_callback(self, msg):
        self.coverage_feedback = msg.feedback
        self.get_logger().info("Coverage feedback received.")

    # ------------------ Pose navigation ------------------
    def sendPoseGoal(self, x, y, yaw=0.0):
        """Send a pose goal and wait until completion"""
        import tf_transformations

        goal_msg = NavigateToPose.Goal()
        goal_msg.pose.header.frame_id = 'map'
        goal_msg.pose.pose.position.x = x
        goal_msg.pose.pose.position.y = y
        goal_msg.pose.pose.position.z = 0.0

        q = tf_transformations.quaternion_from_euler(0, 0, yaw)
        goal_msg.pose.pose.orientation.x = q[0]
        goal_msg.pose.pose.orientation.y = q[1]
        goal_msg.pose.pose.orientation.z = q[2]
        goal_msg.pose.pose.orientation.w = q[3]

        self.pose_client.wait_for_server()
        send_goal_future = self.pose_client.send_goal_async(goal_msg, feedback_callback=self.pose_feedback_callback)
        rclpy.spin_until_future_complete(self, send_goal_future)
        goal_handle = send_goal_future.result()
        if not goal_handle.accepted:
            self.get_logger().error("Pose goal rejected")
            return False

        result_future = goal_handle.get_result_async()
        rclpy.spin_until_future_complete(self, result_future)
        result = result_future.result()

        if result.status == GoalStatus.STATUS_SUCCEEDED:
            self.get_logger().info(f"Pose ({x}, {y}) reached successfully")
            return True
        else:
            self.get_logger().error(f"Pose navigation failed with status {result.status}")
            return False

    def pose_feedback_callback(self, msg):
        self.pose_feedback = msg.feedback
        self.get_logger().info("Pose feedback received.")

    # ------------------ Node startup ------------------
    def startup(self, node_name='bt_navigator'):
        self.get_logger().info(f'Waiting for {node_name} to become active...')
        node_service = f'{node_name}/get_state'
        state_client = self.create_client(GetState, node_service)
        while not state_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info(f'{node_service} service not available, waiting...')

        req = GetState.Request()
        state = 'unknown'
        while state != 'active':
            future = state_client.call_async(req)
            rclpy.spin_until_future_complete(self, future)
            if future.result() is not None:
                state = future.result().current_state.label
                self.get_logger().info(f'Result of get_state: {state}')
            time.sleep(2)


# ------------------ Main ------------------
def main():
    rclpy.init()
    navigator = CoverageNavigatorTester()
    navigator.startup()

    # Wait for fields to be published
    print("Waiting for fields...")
    while rclpy.ok() and not navigator.received_fields:
        rclpy.spin_once(navigator, timeout_sec=0.5)

    print(f"Received {len(navigator.received_fields)} fields")

    # --- Example sequential tasks ---
    tasks = [
        {"type": "pose", "x": 1.0, "y": 1.0, "yaw": 0.0},
        {"type": "coverage", "field": navigator.received_fields[0]},
        {"type": "pose", "x": 1.0, "y": 4.0, "yaw": 0.0},
        {"type": "coverage", "field": navigator.received_fields[1] if len(navigator.received_fields) > 1 else navigator.received_fields[0]}
    ]

    for task in tasks:
        if task["type"] == "pose":
            navigator.sendPoseGoal(task["x"], task["y"], task["yaw"])
        elif task["type"] == "coverage":
            navigator.navigateCoverage(task["field"])

    print("All tasks completed!")


if __name__ == '__main__':
    main()
