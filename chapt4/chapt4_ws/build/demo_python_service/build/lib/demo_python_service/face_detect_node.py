import rclpy
from rclpy.node import Node
from chapt4_interfaces.srv import FaceDetector
import cv2
import face_recognition
from ament_index_python.packages import get_package_share_directory
import os
from cv_bridge import CvBridge
import time
from rcl_interfaces.msg import SetParametersResult


class FaceDetectNode(Node):
    def __init__(self):
        super().__init__('face_detect_node')
        self.service_ = self.create_service(FaceDetector, 'face_detect', self.detect_face_callback)
        self.bridge = CvBridge()
        self.declare_parameter('number_of_times_to_upsample', 1)
        self.declare_parameter('model', "hog")
        self.number_of_times_to_upsample = self.get_parameter('number_of_times_to_upsample').value
        self.model = self.get_parameter('model').value
        self.default_image_path = os.path.join(get_package_share_directory('demo_python_service'), 'resource/default.jpg')
        self.get_logger().info("人脸检测服务已启动")
        self.add_on_set_parameters_callback(self.parameters_callback)
        # 设置自身节点参数
        #self.set_parameters([rclpy.Parameter('model', rclpy.Parameter.Type.STRING, 'cnn')])
    
    def parameters_callback(self, parameters):
        for parameter in parameters:
            self.get_logger().info(f"{parameter.name} -> {parameter.value}")
            if parameter.name == 'number_of_times_to_upsample':
                self.number_of_times_to_upsample = parameter.value
                self.get_logger().info("参数number_of_times_to_upsample已更新")
            if parameter.name == 'model':
                self.model = parameter.value
                self.get_logger().info("参数model已更新")
        return SetParametersResult(successful=True)


    def detect_face_callback(self, request, response):
        if request.image.data:
            cv_image = self.bridge.imgmsg_to_cv2(request.image)
        else:
            cv_image = cv2.imread(self.default_image_path)
            self.get_logger().info("传入图像为空，使用默认图像")
        start_time = time.time()
        self.get_logger().info("加载图像完成，开始检测人脸")
        face_locations = face_recognition.face_locations(cv_image, number_of_times_to_upsample=self.number_of_times_to_upsample, model=self.model)
        response.use_time = time.time() - start_time
        response.number = len(face_locations)
        for top,right,bottom,left in face_locations:
            response.top.append(top)
            response.right.append(right)
            response.bottom.append(bottom)
            response.left.append(left)


        return response
        

def main():
    rclpy.init()
    node = FaceDetectNode()
    rclpy.spin(node)
    rclpy.shutdown()