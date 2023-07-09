cmake_minimum_required(VERSION 3.25)
project(JavaUtil)

set(CMAKE_CXX_STANDARD 23)

add_executable(JavaUtil main.cpp examples/java_util/Vector_1.cpp)
include_directories(include)