import rclpy 
from rclpy.node import Node
from rclpy.action import ActionClient
from lab02_interfaces.srv import GetTrajectory
from turtlesim.msg import Pose
from turtlesim.action import RotateAbsolute


import math 

class ComputeTrajectory(Node):

    def __init__(self):
        super().__init__('trajectory')
        self.srv = self.create_service(GetTrajectory, 'get_trajectory', self.get_trajectory_callback)
        self.turtle_pose_subscriber = self.create_subscription(Pose, 'turtle1/pose', self.turtle_pose_subscriber_callback, 10)
        self._rotate_absolute_action_client = ActionClient(self, RotateAbsolute, '/turtle1/rotate_absolute')
        
        self.turtle_pose = Pose()
    
    def turtle_pose_subscriber_callback(self, msg):
        self._logger.info('Turtle pose: x: %f, y: %f, theta: %f' % (msg.x, msg.y, msg.theta))
        self.pose = msg
        
    


    def get_trajectory_callback(self, request, response):

        self._logger.info('Received request: x: %f, y: %f' % (request.x, request.y))   

        response.distance = math.sqrt((request.x - self.turtle_pose.x)**2 + (request.y - self.turtle_pose.y)**2)
        response.direction = math.atan2(request.y - self.turtle_pose.y, request.x - self.turtle_pose.x)
        
        self._logger.info('Distance: %f, Direction: %f' % (response.distance, response.direction))

        goal_msg = RotateAbsolute.Goal()
        goal_msg.theta = response.direction

        self._rotate_absolute_action_client.wait_for_server()
        self._rotate_absolute_action_client.send_goal_async(goal_msg)
        
        return response
    
    
    

def main(args=None):
    rclpy.init(args=args)
    compute_trajectory = ComputeTrajectory()
    rclpy.spin(compute_trajectory)
    
    rclpy.shutdown()
    
if __name__ == '__main__':
    main()
