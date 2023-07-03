cmake_minimum_required(VERSION 3.25)
project(JavaUtil)

set(CMAKE_CXX_STANDARD 23)

add_executable(JavaUtil main.cpp include/java_util/Arrays.h src/java_util/Arrays.cpp)
