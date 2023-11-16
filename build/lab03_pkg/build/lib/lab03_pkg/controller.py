import rclpy
import time
import numpy as np
import  tf_transformations


from rclpy.node import Node
from sensor_msgs.msg import LaserScan
from nav_msgs.msg import Odometry
from geometry_msgs.msg import Twist


class Controller(Node):

    def __init__(self):
        super().__init__('turtlebot3_controller')

        self.__lidar_scan_subscriber = self.create_subscription(LaserScan, 'scan', self.lidar_scan_subscriber_callback, 10)
        self.__lidar_scan_subscriber

        self.__pose_subscriber = self.create_subscription(Odometry, 'odom', self.pose_subscriber_callback, 10)
        self.__pose_subscriber

        self.__cmd_vel_publisher = self.create_publisher(Twist, 'cmd_vel', 10)
        self.__cmd_vel_publisher

        
    def lidar_scan_subscriber_callback(self, msg):

        msg.angle_min = -np.pi*6/10
        msg.angle_max = np.pi*6/10

        self.lidar_scan = np.array(msg.ranges)

        velocity_msg = Twist()

        if np.mean(self.lidar_scan[(int(len(self.lidar_scan)/2 - 15)):int((len(self.lidar_scan)/2 + 15))]) < 0.5:
            
            self._logger.info('Bump')
            
            velocity_msg.linear.x = -0.5
            self.__cmd_vel_publisher.publish(velocity_msg)

            time.sleep(1.5)

            velocity_msg.linear.x = 0.0
            self.__cmd_vel_publisher.publish(velocity_msg)    

            if np.mean(self.lidar_scan[0:30]) > np.mean(self.lidar_scan[-30:-1]):
                velocity_msg.angular.z = -0.5
                self.__cmd_vel_publisher.publish(velocity_msg)
                time.sleep(np.pi)
                velocity_msg.angular.z = 0.0
                self.__cmd_vel_publisher.publish(velocity_msg)
            else:
                velocity_msg.angular.z = 0.5
                self.__cmd_vel_publisher.publish(velocity_msg)
                time.sleep(np.pi)
                velocity_msg.angular.z = 0.0
                self.__cmd_vel_publisher.publish(velocity_msg)

            self._logger.info('Turn complete')

        velocity_msg.linear.x = 1.0
        velocity_msg.angular.z = 0.0
        self.__cmd_vel_publisher.publish(velocity_msg)

    def pose_subscriber_callback(self, msg):

        velocity_msg = Twist()

        self.intermediate_pose = np.array([6.5, 2.5, np.pi/2])
        self.final_pose = np.array([0.0, 0.0, np.pi])

        _, _, yaw = tf_transformations.euler_from_quaternion([msg.pose.orientation.x, msg.pose.orientation.y, msg.pose.orientation.z, msg.pose.orientation.w])
        self.pose = np.array([msg.pose.pose.position.x, msg.pose.pose.position.y, yaw])

        if np.linalg.norm(self.pose[0,1] - self.intermediate_pose[0,1]) < 1 and abs(self.pose[2] - self.intermediate_pose[2]) < 0.1:

            self._logger.info('Intermediate pose reached')
           
            velocity_msg.linear.x = 0.0
            velocity_msg.angular.z = 1.0
           
            self.__cmd_vel_publisher.publish(velocity_msg)
           
            time.sleep(np.pi)
           
            velocity_msg.angular.z = 0.0
           
            self.__cmd_vel_publisher.publish(velocity_msg)
        elif np.linalg.norm(self.pose[0,1] - self.final_pose[0,1]) < 1 and np.abs(self.pose[2] - self.final_pose[2]) < 0.1:

            velocity_msg.linear.x = 0.0
            velocity_msg.angular.z = 0.0

            self.__cmd_vel_publisher.publish(velocity_msg)
            self._logger.info('Final pose reached')


def main(args=None):
    rclpy.init(args=args)

    controller = Controller()

    rclpy.spin(controller)

    controller.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

