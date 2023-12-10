cmake_minimum_required(VERSION 3.0)

project(HELLOWORLD)

include_directories(include)

add_executable(relation relation.cpp src/Circle.cpp src/Point.cpp)