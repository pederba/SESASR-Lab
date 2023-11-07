import rclpy
from rclpy.node import Node

from geometry_msgs.msg import Twist
from geometry_msgs.msg import Pose
from std_msgs.msg import Bool

class Localization(Node):

    def __init__(self):
        super().__init__('localization')
        self.pose = Pose()

        self.vel_subscription = self.create_subscription(
            Twist,
            'cmd_topic',
            self.vel_listener_callback, 
            10)
        self.vel_subscription

        self.reset_subscription = self.create_subscription(
            Bool,
            'reset',
            self.reset_listener_callback,
            10)
        self.reset_subscription

        self.publisher_ = self.create_publisher(
            Pose, 
            'pose', 
            10)
        self.publisher_

        self.pose.position.x = float(0)
        self.pose.position.y = float(0)

    def vel_listener_callback(self, msg):

        self.publisher_callback(self.pose)

        self.pose.position.x = msg.linear.x + self.pose.position.x
        self.pose.position.y = msg.linear.y + self.pose.position.y

    def reset_listener_callback(self, msg):

        if msg.data == True:
            self.pose.position.x = float(0)
            self.pose.position.y = float(0)
            self.get_logger().info('Resetting localization')

    def publisher_callback(self, msg):

        self.get_logger().info('Estimated pose: "%s"' % msg)
        self.publisher_.publish(msg)

def main(args=None):
    rclpy.init(args=args)

    localization = Localization()

    rclpy.spin(localization)

    localization.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()