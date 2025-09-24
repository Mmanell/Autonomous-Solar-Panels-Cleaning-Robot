#!/usr/bin/env python3

"""
Description:
Publish the battery state at a specific time interval using a linear discharge model
-------
Publishing Topics:
/battery_status – sensor_msgs/BatteryState
-------
Subscription Topics:
None
-------
"""

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import BatteryState


class BatteryStatePublisher(Node):
    """
    A ROS2 node that publishes the battery state of an object at a specific time interval
    using a linear discharge model.
    """

    def __init__(self):
        super().__init__('battery_state_pub')

        self.publisher_battery_state = self.create_publisher(BatteryState, '/battery_status', 10)

        timer_period = 0.2 
        self.timer = self.create_timer(timer_period, self.get_battery_state)

        # Battery parameters
        self.V0 = 12.6      # Fully charged voltage [V]
        self.Q = 5.0        # Capacity [Ah]
        self.alpha = (self.V0 - 9.0)  # Voltage drop until "empty"
        self.R = 0.05       # Internal resistance [Ohm]

        # State variables
        self.it = 0.0       # Accumulated discharge [Ah]
        self.current = 1.0  # Constant current draw [A] (example)
        self.dt = timer_period / 3600.0  # convert seconds to hours

    def get_battery_state(self):
        """
        Callback function.
        Computes the linear discharge model and publishes BatteryState.
        """
        # Update accumulated discharge (Ah)
        self.it += self.current * self.dt

        # Compute voltage from the linear model
        V = self.V0 - self.alpha * (self.it / self.Q) - self.current * self.R
        if V < 0.0:
            V = 0.0

        # Compute percentage
        percent = max(0.0, 1.0 - (self.it / self.Q))

        # Create and publish message
        msg = BatteryState()
        msg.voltage = V
        msg.percentage = percent
        msg.current = -self.current  # convention: discharging current is negative
        self.publisher_battery_state.publish(msg)

        #self.get_logger().info(f"Voltage: {V:.2f} V | Charge: {percent*100:.1f}%")


def main(args=None):
    rclpy.init(args=args)
    battery_state_pub = BatteryStatePublisher()
    rclpy.spin(battery_state_pub)
    battery_state_pub.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
