
import time
import lgpio



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
        time.sleep(0.0000001)
        trigdata = lgpio.gpio_write(h, trig, 0)
        
        while not lgpio.gpio_read(h, echo):
           sig_off = time.time()
           
        while lgpio.gpio_read(h, echo):
           sig_on = time.time()
           
        dist = (sig_on - sig_off) * 34000 / 2
        
        return dist

    def is_obstacle_appear(self):
        d = self.distance(self.h, self.trig, self.echo)
        if d <= 50:
            return True
        
        return False

def main(args=None):
    ultrasonic = Ultrasonic()
    while True:
        print(ultrasonic.distance(ultrasonic.h, ultrasonic.trig, ultrasonic.echo))


if __name__ == '__main__':
    main()
