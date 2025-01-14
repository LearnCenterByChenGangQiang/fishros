import os
from ament_index_python.packages import get_package_share_directory
import launch
import launch_ros
from launch.substitutions import Command, LaunchConfiguration

def generate_launch_description():
    # 获取包路径
    pkg_path = get_package_share_directory('fishhot_description')
    
    # 设置默认的 xacro 文件路径
    default_model_path = os.path.join(pkg_path, 'urdf', 'fishbot', 'fishbot.urdf.xacro')
    
    # 声明启动参数
    model_arg = launch.actions.DeclareLaunchArgument(
        name='model', 
        default_value=default_model_path,
        description='Absolute path to robot urdf/xacro file'
    )

    # 使用 xacro 处理 URDF
    robot_description_content = Command(
        [
            'xacro ',
            LaunchConfiguration('model')
        ]
    )

    # 配置robot_state_publisher节点
    robot_state_publisher_node = launch_ros.actions.Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        parameters=[{'robot_description': robot_description_content}]
    )

    # 配置joint_state_publisher节点
    joint_state_publisher_node = launch_ros.actions.Node(
        package='joint_state_publisher',
        executable='joint_state_publisher'
    )

    # 配置rviz2节点
    rviz_config_path = os.path.join(pkg_path, 'config', 'urdf_config.rviz')
    rviz_node = launch_ros.actions.Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        arguments=['-d', rviz_config_path]
    )

    return launch.LaunchDescription([
        model_arg,
        robot_state_publisher_node,
        joint_state_publisher_node,
        rviz_node
    ])