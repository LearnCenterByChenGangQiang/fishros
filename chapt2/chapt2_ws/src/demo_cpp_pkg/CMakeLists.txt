cmake_minimum_required(VERSION 3.8)
project(demo_cpp_pkg)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

add_executable(${PROJECT_NAME} src/cpp_node.cpp)
add_executable(person_node src/person_node.cpp)

#target_include_directories(${PROJECT_NAME} PUBLIC ${rclcpp_INCLUDE_DIRS}) // Add include(s) to the target
#target_link_libraries(${PROJECT_NAME} ${rclcpp_LIBRARIES}) // Link the target with the library

# = target_include_directories + target_link_libraries
ament_target_dependencies(${PROJECT_NAME} rclcpp) 
ament_target_dependencies(person_node rclcpp) 

install(TARGETS
  ${PROJECT_NAME} person_node
  DESTINATION lib/${PROJECT_NAME}
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
