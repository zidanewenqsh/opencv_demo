cmake_minimum_required(VERSION 3.10)
project(VideoPlayer)

# 查找 OpenCV 库
find_package(OpenCV REQUIRED)

# 添加可执行文件
add_executable(VideoPlayer main.cpp)

# 链接 OpenCV 库
target_link_libraries(VideoPlayer ${OpenCV_LIBS})
