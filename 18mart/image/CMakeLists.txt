cmake_minimum_required(VERSION 3.29)
project(image)

set(CMAKE_CXX_STANDARD 20)

find_package(OpenCV REQUIRED)
include_directories(${OpenON_INCLUDE_DIRS})
add_executable(image main.cpp)

target_link_libraries(image ${OpenCV_LIBS})
