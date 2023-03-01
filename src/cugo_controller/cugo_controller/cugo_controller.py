#!/usr/bin/env python3

import smbus
import rclpy
from rclpy.node import Node

from controller_interfaces.msg import Num        
from controller_interfaces.srv import Ultra  

class CugoController(Node):

    def __init__(self):
        super().__init__('cugo_controll')
        self.srv = self.create_service(Ultra, "ultra", self.stop_callback_ultra)
        self.subscription = self.create_subscription(
            Num,                                              
            'topic',
            self.listener_callback,
            10)
        self.subscription
        self.need_stop = False
        
        self.rcatap_addr = 0x40
        self.lcatap_addr = 0x41

        self.i2c = smbus.SMBus(1)

        self.get_logger().info("Initialization completed. Waiting publisher ...")
        
    def stop_callback_ultra(self, request, response):
        if request.is_obstacle:
            self.need_stop = True
            self.get_logger().info("RED LIGHT!!")
            response.is_received = True
            
        elif not request.is_obstacle:
            self.need_stop = False
            self.get_logger().info("GREEN LIGHT")
            response.is_received = True
            
        else:
            response.is_received = False

        return response
            
    def listener_callback(self, msg):
        if self.need_stop:
            self.stop()
            
        if not self.need_stop:
            if msg.dir == 0:
                self.stop()
                self.get_logger().info("stop")
                
            elif msg.dir == 1:
                self.set_forward()
                self.move()
                self.get_logger().info("forward")

            elif msg.dir == 2:
                self.set_right()
                self.move()
                self.get_logger().info("turn right")

            elif msg.dir == 3:
                self.set_backward()
                self.move()
                self.get_logger().info("backward")

            elif msg.dir == 4:
                self.set_left()
                self.move()
                self.get_logger().info("turn left")

            else:
                self.stop()
                self.get_logger().info("unknown situation...?")


    def set_forward(self):
        self.i2c.write_byte_data(self.lcatap_addr, 0x01,0b00000000)
        self.i2c.write_byte_data(self.rcatap_addr, 0x01,0b10000000)

    def set_backward(self):
        self.i2c.write_byte_data(self.lcatap_addr, 0x01,0b10000000)
        self.i2c.write_byte_data(self.rcatap_addr, 0x01,0b00000000)

    def set_right(self):
        self.i2c.write_byte_data(self.rcatap_addr, 0x01,0b10000000)
        self.i2c.write_byte_data(self.lcatap_addr, 0x01,0b10000000)

    def set_left(self):
        self.i2c.write_byte_data(self.lcatap_addr, 0x01,0b00000000)
        self.i2c.write_byte_data(self.rcatap_addr, 0x01,0b00000000)
        
    def stop(self):
        self.i2c.write_byte_data(self.rcatap_addr, 0x00, 0x00)
        self.i2c.write_byte_data(self.lcatap_addr, 0x00, 0x00)

    def move(self):
        self.i2c.write_byte_data(self.rcatap_addr, 0x00, 0x80)
        self.i2c.write_byte_data(self.lcatap_addr, 0x00, 0x80)


def main(args=None):
    try:
        rclpy.init(args=args)

        cugo_controller = CugoController()

        rclpy.spin(cugo_controller)
        
    except KeyboardInterrupt:
        pass
    
    finally:
        cugo_controller.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
