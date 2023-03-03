import rclpy
from rclpy.node import Node
import time
import lgpio

from controller_interfaces.srv import Ultra 


class ClientAsync(Node):
    def __init__(self):
        super().__init__('ultra_client')
        self.cli = self.create_client(Ultra, "ultra")
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info("service is not available, waiting again...")
        self.req = Ultra.Request()

        
    def send_stop_request(self):
        self.req.is_obstacle = True
        self.future = self.cli.call_async(self.req)

    def send_restart_request(self):
        self.req.is_obstacle = False
        self.future = self.cli.call_async(self.req)


class Ultrasonic():
    def __init__(self):
        self.trig = 27
        self.echo = 18
        self.h = lgpio.gpiochip_open(0)
        
        self.setup_gpio(self.h, self.trig, self.echo)
        print("Initialization completed.  start ultrasonic")

    def __del__(self):
        lgpio.gpiochip_close(self.h)
        
    def setup_gpio(self, h, trig, echo):
        if h <= 0:
            self.get_logger().info("open error")
            return False
            
        lgpio.gpio_claim_output(h, trig)
        lgpio.gpio_claim_input(h, echo)

        trig_info = lgpio.gpio_get_line_info(h, trig)
        echo_info = lgpio.gpio_get_line_info(h, echo)

        print("triger's infomation :" + str(trig_info))
        print("echo's information :"  + str(echo_info))
        
        trig_mode = lgpio.gpio_get_mode(h, trig)
        echo_mode = lgpio.gpio_get_mode(h, echo)
        
        print("triger's mode :" +  str(trig_mode))
        print("echo's mode :" +  str(echo_mode))
        
        return True

    def distance(self, h, trig, echo):
        trigdata = lgpio.gpio_write(h, trig, 1)
        time.sleep(0.001)
        trigdata = lgpio.gpio_write(h, trig, 0)

        start = time.time()
        
        while lgpio.gpio_read(h, echo) == start:
           goal = time.time()
        
        dist = (start - goal) * 34000 / 2
        
        return dist
    
        """
        trigdata = lgpio.gpio_write(h, trig, 1)
        time.sleep(0.001)
        trigdata = lgpio.gpio_write(h, trig, 0)

        while lgpio.gpio_read(h, echo) == end:
           sig_off = time.time()
        
        while lgpio.gpio_read(h, echo) == start:
           sig_on = time.time()
        
        dist = (sig_on - sig_off) * 34000 / 2
        
        return dist
        """
        
    def is_obstacle_appear(self):
        d = self.distance(self.h, self.trig, self.echo)
        if d <= 50:
            return True
        
        return False


def main(args=None):
    rclpy.init(args=args)

    Flag = False # to judge if obstacle disappeared or not
    client = ClientAsync()
    ultrasonic = Ultrasonic()
    try:
        while True:
            if ultrasonic.is_obstacle_appear():
                client.send_stop_request()
                Flag = True
                
            elif Flag and not ultrasonic.is_obstacle_appear():
                client.send_restart_request()
                Flag = False
            else:
                continue

            while rclpy.ok():
                rclpy.spin_once(client)
                if client.future.done():
                    try:
                        responce = client.future.result()
                    except Exception as e:
                        client.get_logger().info("ERROR service call failed %r " % (e,))
                    else:
                        if not responce.is_received:
                            #client.get_logger().info("command successfly sent")
                            client.get_logger().info("ERROR command not successfly sent")
                            
                    break
    except KeyboardInterrupt:
        pass
    
    finally:                
        del ultrasonic
        client.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
