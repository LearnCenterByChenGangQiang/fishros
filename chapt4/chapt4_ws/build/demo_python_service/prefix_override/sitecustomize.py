import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/parallels/dev/ros2/fishros/chapt4/chapt4_ws/install/demo_python_service'
