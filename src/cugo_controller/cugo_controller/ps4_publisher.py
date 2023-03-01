import rclpy
from rclpy.node import Node
import pygame
import time

from controller_interfaces.msg import Num    


class MinimalPublisher(Node):

    def __init__(self):
        super().__init__('minimal_publisher')
        self.publisher_ = self.create_publisher(Num, 'topic', 10)
        
        self.j = self.setup_joystic()
        self.get_logger().info("Initialization completed. Use left side joy")
        
        self.pub_joy_data()
        
    def setup_joystic(self):
        pygame.init()
        
        pygame.joystick.init()
        j = pygame.joystick.Joystick(0)
        j.init()
        
        return j
        
    
    def pub_joy_data(self):
        msg = Num()

        while True:
            try:
                events = pygame.event.get()
                
                for event in events:                    
                    msg.x = self.j.get_axis(0)
                    msg.y = self.j.get_axis(1)
                    msg.dir = 0
                    
                    if msg.x > 0.9 and msg.y < 0.5:
                        self.get_logger().info("trun right      ("+str(msg.x)+","+ str(msg.y)+")")
                        msg.dir = 2
                        
                    elif msg.x < -0.9 and msg.y < 0.5:
                        self.get_logger().info("turn left       ("+str(msg.x)+","+ str(msg.y)+")")
                        msg.dir = 4
                        
                    elif msg.x < 0.5 and msg.y < -0.9:
                        self.get_logger().info("straight       ("+str(msg.x)+","+ str(msg.y)+")")
                        msg.dir = 1
                        
                    elif msg.x < 0.5 and msg.y > 0.9:
                        self.get_logger().info("back           ("+str(msg.x)+","+ str(msg.y)+")")
                        msg.dir = 3

                    else:
                        msg.x = 0.0
                        msg.y = 0.0
                        

                    self.publisher_.publish(msg)
                    
            except KeyboardInterrupt:
                self.j.quit()
                break
        
def main(args=None):
    rclpy.init(args=args)

    minimal_publisher = MinimalPublisher()

    rclpy.spin(minimal_publisher)

    minimal_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
