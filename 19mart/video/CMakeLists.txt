cmake_minimum_required(VERSION 3.29)
project(video)

set(CMAKE_CXX_STANDARD 20)

find_package(OpenCV REQUIRED)
include_directories(${OpenON_INCLUDE_DIRS})
add_executable(video main.cpp)
add_executable(image_create more.cpp)
add_executable(photo_again photo_again.cpp)

target_link_libraries(video ${OpenCV_LIBS})
target_link_libraries(image_create ${OpenCV_LIBS})
target_link_libraries(photo_again ${OpenCV_LIBS})