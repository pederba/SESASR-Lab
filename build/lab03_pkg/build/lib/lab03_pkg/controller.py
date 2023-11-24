import rclpy
import time
import numpy as np
import  tf_transformations


from rclpy.node import Node
from sensor_msgs.msg import LaserScan
from nav_msgs.msg import Odometry
from geometry_msgs.msg import Twist
from sklearn.cluster import DBSCAN


class Controller(Node):

    def __init__(self):
        super().__init__('controller')

        self.__lidar_scan_subscriber = self.create_subscription(
            LaserScan, 
            'scan', 
            self.lidar_scan_subscriber_callback, 
            10)
        self.__lidar_scan_subscriber

        self.__pose_subscriber = self.create_subscription(
            Odometry, 
            '/diff_drive_controller/odom', 
            self.pose_subscriber_callback, 
            10)
        self.__pose_subscriber

        self.__cmd_vel_publisher = self.create_publisher(
            Twist, 
            'cmd_vel', 
            10)
        self.__cmd_vel_publisher

        ## Parameters
        self.declare_parameters(
            namespace='',
            parameters=[
                ('max_linear_velocity', 0.22),
                ('max_angular_velocity', 1.5),
                ('timer_freq', 500)
            ]
        )

        self.max_linear_velocity = self.get_parameter('max_linear_velocity').value
        self.max_angular_velocity = self.get_parameter('max_angular_velocity').value
        timer_freq = self.get_parameter('timer_freq').value

        self.timer = self.create_timer(1/timer_freq, self.timer_callback)

        self.bumping = False
        self.turning = False
        self.returning = False

        self.time_of_bump = 0.0
        self.goal_heading = 0.0

        self.lidar_scan = np.ones(360) 
        self.pose = np.zeros(3)

        self.velocity_msg = Twist()
        self.velocity_msg.linear.x = self.max_linear_velocity
        self.velocity_msg.angular.z = 0.0

        # PI regulator
        self.Kp = 1
        self.Ki = 0.01
        
        self.integral_error = 0
        self.max_integral_error = 3
        

    
    ## ______CALLBACKS_____ ##

    def lidar_scan_subscriber_callback(self, msg):

        self.lidar_scan = np.array(msg.ranges)
        self.lidar_scan[np.isinf(self.lidar_scan)] = 3.5

    def pose_subscriber_callback(self, msg):
        _, _, yaw = tf_transformations.euler_from_quaternion([msg.pose.pose.orientation.x, msg.pose.pose.orientation.y, msg.pose.pose.orientation.z, msg.pose.pose.orientation.w])
        self.pose = np.array([msg.pose.pose.position.x, msg.pose.pose.position.y, yaw])
        

    def timer_callback(self):
        self.control_loop()



    ## ______CONTROL LOOP_____ ##

    def control_loop(self):
        
        intermediate_pose = np.array([6.5, 2.5, np.pi/2])
        final_pose = np.array([0.0, 0.0, np.pi])

        if np.linalg.norm(self.pose[0:2] - final_pose[0:2]) < 1 and abs(self.pose[2] - final_pose[2] < 0.01) and self.returning:
            self.velocity_msg.linear.x = 0.0
            self.velocity_msg.angular.z = 0.0
            self._logger.info('Done')
            self.destroy_node()
            return

        elif np.linalg.norm(self.pose[0:2] - intermediate_pose[0:2]) < 0.5 and not self.returning:

            self._logger.info('Halfway')

            self.velocity_msg.linear.x = 0.0
                       
            self.turning = True
            self.returning = True

            self.goal_heading = intermediate_pose[2]

        elif np.linalg.norm(self.pose[0:2] - final_pose[0:2]) < 1 and self.returning:

            self.velocity_msg.linear.x = 0.0

            self.turning = True
            self.goal_heading = final_pose[2]

            self._logger.info('Done')
            

            return
        
        elif np.all((self.lidar_scan[:100] + self.lidar_scan[-100:]) < 0.5):
            self._logger.info('Blocked')
            self.velocity_msg.linear.x = 0.0
            self.velocity_msg.angular.z = 0.0
            

        elif np.mean(self.lidar_scan[0:10] + self.lidar_scan[-10:]) < 0.5 and not self.bumping:
            
            self._logger.info('Bump')
            self.bumping = True
            
            self.velocity_msg.linear.x = -self.max_linear_velocity
            self.velocity_msg.angular.z = 0.0

            self.time_of_bump = time.time()
            
    
        elif self.bumping:
            if time.time() - self.time_of_bump >= 3.5:
                self.turning = True
                self.bumping = False
                self.velocity_msg.linear.x = 0.0

                if np.mean(self.lidar_scan[80:100]) > np.mean(self.lidar_scan[-100:-80]):
                    self._logger.info('Turn left')
                    self.goal_heading = self.pose[2] + np.pi/2
                    
                else:
                    self._logger.info('Turn right')
                    self.goal_heading = self.pose[2] - np.pi/2
   

        elif self.turning:

            turn_error = self.goal_heading - self.pose[2]

            if abs(turn_error) > np.pi:
                turn_error -= 2*np.pi * np.sign(turn_error)

            self.integral_error += turn_error
            self.integral_error = np.clip(self.integral_error, -self.max_integral_error, self.max_integral_error)

            if  abs(turn_error) < 0.005:
                self._logger.info('Turn complete, resuming')
                self.integral_error = 0
                self.turning = False

                self.velocity_msg.linear.x = self.max_linear_velocity
                self.velocity_msg.angular.z = 0.0
            else:
                self.velocity_msg.angular.z = np.clip(self.Kp * turn_error + self.Ki * self.integral_error, -self.max_angular_velocity, self.max_angular_velocity)


        self.__cmd_vel_publisher.publish(self.velocity_msg) 
                
        


def main(args=None):
    rclpy.init(args=args)

    controller = Controller()

    rclpy.spin(controller)

    controller.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

