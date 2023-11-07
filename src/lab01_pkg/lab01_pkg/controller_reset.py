import rclpy
from rclpy.node import Node

from geometry_msgs.msg import Twist
from std_msgs.msg import Bool

class Controller(Node):

    def __init__(self):
        super().__init__('controller')
        
        self.publisher_ = self.create_publisher(
            Twist, 
            'cmd_topic', 
            10)
        self.publisher_

        self.subscriber_ = self.create_subscription(
            Bool,
            'reset',
            self.listener_callback,
            10)
        self.subscriber_
        
        timer_period = 1  # 1Hz
        self.timer = self.create_timer(timer_period, self.timer_callback)

        self.i = 0

        self.N = 1
        self.moveset_num = 4
        

    def timer_callback(self):
        msg = Twist()

        if self.i < self.N:
            msg.linear.x = float(1)
        elif self.i < 2*self.N:
            msg.linear.y = float(1)
        elif self.i < 3*self.N:
            msg.linear.x = float(-1)
        else:
            msg.linear.y = float(-1)

        self.publisher_.publish(msg)
        self.get_logger().info('Publishing: "%s"' % msg) # Logging
        self.i += 1 

        if self.i >= self.N * self.moveset_num:
            self.i = 0
            self.N += 1

    def listener_callback(self, msg):
        if msg.data == True:
            self.i = 0
            self.N = 1
            self.get_logger().info('Resetting controller')


def main(args=None):
    rclpy.init(args=args)

    controller = Controller()

    rclpy.spin(controller)

    controller.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()