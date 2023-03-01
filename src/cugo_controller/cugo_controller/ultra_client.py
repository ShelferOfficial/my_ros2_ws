import rclpy
from rclpy.node import Node
import time
import lgpio

from controller_interfaces.srv import Ultra 

class UltrasonicClient(Node):
    def __init__(self):
        super().__init__('ultra_client')
        self.req = Ultra.Request()
        self.trig = 27
        self.echo = 18
        self.h = lgpio.gpiochip_open(0)
        
        self.cli = self.create_client(Ultra, "ultra")
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info("service is not available, wait...")
        
        
        self.setup_gpio(self.h, self.trig, self.echo)
        self.get_logger().info("Initialization completed.  start ultrasonic")
    
        responce = self.send_stop_request(self.h, self.trig, self.echo)
        if not responce:
            self.get_logger().info("Error something worng")
        
    def setup_gpio(self, h, trig, echo):
        if h >= 0:
            self.get_logger().info("open okay")
        else:
            self.get_logger().info("open error")
            quit()
            
        lgpio.gpio_claim_output(h, trig)
        lgpio.gpio_claim_input(h, echo)

        infotrig = lgpio.gpio_get_line_info(h, trig)
        infoecho = lgpio.gpio_get_line_info(h, echo)

        self.get_logger().info(str(infotrig))
        self.get_logger().info(str(infoecho))
        
        modetrig = lgpio.gpio_get_mode(h, trig)
        modeecho = lgpio.gpio_get_mode(h, echo)
        
        self.get_logger().info("mode trig:" +  str(modetrig))
        self.get_logger().info("mode echo:" +  str(modeecho))

    def send_stop_request(self, h, trig, echo):
        msg = Num()
        try:
            trigdata = lgpio.gpio_write(h, trig, 1)
            time.sleep(0.00001)
            trigdata = lgpio.gpio_write(h, trig, 0)
            
            while not lgpio.gpio_read(h, echo):
               sig_off = time.time()
            while lgpio.gpio_read(h, echo):
               sig_on = time.time()
               
            dist = (sig_on - sig_off) * 34000 / 2
            
            if dist <= 30:
                self.req.is_obstacle = True
                self.future = self.cli.call_async(self.req)
                rclpy.spin_until_future_complete(self, self.future)

                return self.future.result()

        except KeyboardInterrupt:
            lgpio.gpiochip_close(self.h)
            self.get_logger().info("good bye")


def main(args=None):
    rclpy.init(args=args)

    ultra_client = UltrasonicClient()
    ultra_client.
    #rclpy.spin(minimal_publisher)

    minimal_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
