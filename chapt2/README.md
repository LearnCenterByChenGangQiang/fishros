# create
ros2 pkg create demo_python_pkg --build-type ament_python --license Apache-2.0
os2 pkg create demo_cpp_pkg --build-type ament_cmake --license Apache-2.0

# add to setup.py
'python_node = demo_python_pkg.python_node:main',

# add to package.xml
<depend>rclpy</depend>

# build
colcon build

# source
source install/setup.bash

# run 
ros2 run demo_python_pkg python_node 