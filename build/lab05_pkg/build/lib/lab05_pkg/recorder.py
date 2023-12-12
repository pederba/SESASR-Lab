import rclpy
from rclpy.node import Node
from nav_msgs.msg import Odometry
import message_filters
import numpy as np
import  tf_transformations

class RecorderNode(Node):
    def __init__(self):
        super().__init__("my_node")
        self.get_logger().info("Initializing my_node")

        # Create the subscribers and synchronize the messages
        self.odom_sub = message_filters.Subscriber(self, Odometry, "/diff_drive_controller/odom")
        self.filter_sub = message_filters.Subscriber(self, Odometry, "/odometry/filtered")
        self.ground_truth_sub = message_filters.Subscriber(self, Odometry, "/ground_truth")
        self.ts = message_filters.ApproximateTimeSynchronizer(
            [self.odom_sub, self.filter_sub, self.ground_truth_sub], 10, 0.01
        )
        self.ts.registerCallback(self.store_data)

        self.odom = []
        self.filter = []
        self.ground_truth = []

        

    def store_data(self, odom, filter, ground_truth):
        self.get_logger().info(
            f"Storing data... Current lenght {len(self.odom)}", throttle_duration_sec=5.0
        )
        _, _, yaw = tf_transformations.euler_from_quaternion([odom.pose.pose.orientation.x, odom.pose.pose.orientation.y, odom.pose.pose.orientation.z, odom.pose.pose.orientation.w])
        self.odom.append([odom.pose.pose.position.x, odom.pose.pose.position.y, yaw])  # Insert the data that you want to save in the lists

        _, _, yaw = tf_transformations.euler_from_quaternion([filter.pose.pose.orientation.x, filter.pose.pose.orientation.y, filter.pose.pose.orientation.z, filter.pose.pose.orientation.w])
        self.filter.append([filter.pose.pose.position.x, filter.pose.pose.position.y, yaw]) # Insert the data that you want to save in the lists
        
        _, _, yaw = tf_transformations.euler_from_quaternion([ground_truth.pose.pose.position.x, ground_truth.pose.pose.position.y, ground_truth.pose.pose.orientation.z, ground_truth.pose.pose.orientation.w])
        self.ground_truth.append([ground_truth.pose.pose.position.x, ground_truth.pose.pose.position.y, yaw]) # Insert the data that you want to save in the lists

    def save_data(self):
        np.save("odom.npy", np.array(self.odom))
        np.save("filter.npy", np.array(self.filter))
        np.save("ground_truth.npy", np.array(self.ground_truth))
        


def main(args=None):
    rclpy.init(args=args)
    node = RecorderNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass    
    finally:
        node.save_data()
        rclpy.try_shutdown()


if __name__ == "__main__":
    main()
