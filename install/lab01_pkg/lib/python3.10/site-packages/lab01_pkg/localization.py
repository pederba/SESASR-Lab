import rclpy
from rclpy.node import Node

from geometry_msgs.msg import Twist
from geometry_msgs.msg import Pose

class Localization(Node):

    def __init__(self):
        super().__init__('localization')
        self.pose = Pose()

        self.subscription = self.create_subscription(
            Twist,
            'cmd_topic',
            self.listener_callback, 
            10)
        self.subscription

        self.publisher_ = self.create_publisher(
            Pose, 
            'pose', 
            10)
        self.publisher_

        self.pose.position.x = float(0)
        self.pose.position.y = float(0)

    def listener_callback(self, msg):

        self.publisher_callback(self.pose)

        self.pose.position.x = msg.linear.x + self.pose.position.x
        self.pose.position.y = msg.linear.y + self.pose.position.y

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