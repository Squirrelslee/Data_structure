cmake_minimum_required(VERSION 3.10)

project(PUBLIC)

include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(public_exe public_.cpp src/speechManager.cpp)