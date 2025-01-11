import espeakng
import rclpy
from rclpy.node import Node
from example_interfaces.msg import String
from queue import Queue
import threading
import time


class NovelSubNode(Node):
    def __init__(self, node_name):
        super().__init__(node_name)
        self.get_logger().info(f"{node_name}------------Started")
        self.novel_queue = Queue()
        self.novel_subscriber = self.create_subscription(String, "novel", self.callback, 10)
        self.speech_thread = threading.Thread(target=self.speak_thread)
        self.speech_thread.start()

    def callback(self, msg):
        self.novel_queue.put(msg.data)
    
    def speak_thread(self):
        speaker = espeakng.Speaker()
        speaker.voice = "en"

        while rclpy.ok():
            if not self.novel_queue.empty():
                novel = self.novel_queue.get()
                self.get_logger().info(f"Speaking: {novel}")
                speaker.say(novel)
                speaker.wait()
            else:
                time.sleep(1)

def main():
    rclpy.init()
    node = NovelSubNode("novel_sub")
    rclpy.spin(node)
    rclpy.shutdown()