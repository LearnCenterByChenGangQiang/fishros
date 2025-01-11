import rclpy
import requests
from rclpy.node import Node
from example_interfaces.msg import String
from queue import Queue

class NovelPubNode(Node):
    def __init__(self, node_name):
        super().__init__(node_name)
        self.get_logger().info(f"{node_name}------------Started")

        self.novels_queue = Queue()

        self.novel_publisher = self.create_publisher(String, "novel", 10)
        self.timer = self.create_timer(3, self.timer_callback)
        
    
    def timer_callback(self):
        if not self.novels_queue.empty():
            novel = self.novels_queue.get()
            msg = String()
            msg.data = novel
            self.novel_publisher.publish(msg)
            self.get_logger().info(f"Publishing: {msg}")

    def download(self, url):
        response = requests.get(url)
        response.encoding = 'utf-8'
        text = response.text
        self.get_logger().info(f"Downloaded {url} : length {len(text)}")
        for line in text.splitlines():
            self.novels_queue.put(line)


def main():
    rclpy.init()
    node = NovelPubNode("novel_pub")
    node.download("http://0.0.0.0:8000/novel_1.txt")
    rclpy.spin(node)
    rclpy.shutdown()