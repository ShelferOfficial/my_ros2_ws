import rclpy
from rclpy.node import Node

from std_msgs.msg import Float64
from sensor_msgs.msg import Imu



class TemperatureSubscriber(Node):
    def __init__(self):
        super().__init__("trial_subscriber")
        self.subscription = self.create_subscription(
            Float64, "imu/temperature", self.listener_callback, 10)
        self.subscription

    def listener_callback(self, msg):
        self.get_logger().info("Subscribed %s" % msg.data)


def main(args=None):
    try:
        rclpy.init(args=args)
        node = TemperatureSubscriber()
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == "__main__":
    main()
