
cmake_minimum_required(VERSION 3.2)
project(cv_test)
include_directories("/usr/local/include/opencv4/")

add_executable(test cv_test.cpp)
target_link_directories(test PRIVATE /usr/local/lib)
target_link_libraries(test libopencv_core.so libopencv_imgproc.so)