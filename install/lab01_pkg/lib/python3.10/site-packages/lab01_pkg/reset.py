import rclpy
from rclpy.node import Node

from std_msgs.msg import Bool
from geometry_msgs.msg import Pose

class Reset(Node):
     
    def __init__(self):
        super().__init__('reset')
        self.subscription = self.create_subscription(
            Pose, 
            'pose',
            self.listener_callback,
            10)
        self.subscription

        self.publisher = self.create_publisher(
            Bool,
            'reset',
            10)
        self.publisher

    def listener_callback(self, msg):
        if (msg.position.x * msg.position.x + msg.position.y * msg.position.y) >= 36:
            self.publisher_callback()
    
    def publisher_callback(self):
        msg = Bool()
        msg.data = True
        self.get_logger().info('Resetting: "%s"' % msg)
        self.publisher.publish(msg)
    
def main(args=None):
    rclpy.init(args=args)

    reset = Reset()

    rclpy.spin(reset)

    reset.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
