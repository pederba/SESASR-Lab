import rclpy 
from rclpy.node import Node
from lab02_interfaces.srv import GetTrajectory

import math 

class ComputeTrajectory(Node):

    def __init__(self):
        super().__init__('trajectory')
        self.srv = self.create_service(GetTrajectory, 'get_trajectory', self.get_trajectory_callback)


    def get_trajectory_callback(self, request, response):
        
        response.distance = math.sqrt((request.x1 - request.x0) * (request.x1 - request.x0) + (request.y1 - request.y0) * (request.y1 - request.y0))
        response.direction = math.atan2(request.y1 - request.y0, request.x1 - request.x0)


        self._logger.info('Incoming request\nx0: %d, y0: %d, x1: %d, y1: %d' % (request.x0, request.y0, request.x1, request.y1))

        return response

def main(args=None):
    rclpy.init(args=args)
    compute_trajectory = ComputeTrajectory()
    rclpy.spin(compute_trajectory)
    
    rclpy.shutdown()
    
if __name__ == '__main__':
    main()
