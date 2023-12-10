cmake_minimum_required(VERSION 3.16)

project(LABULADONG)

set(CMAKE_BUILD_TYPE Debug)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g")


include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(LABULADONG_exe labuladong.cc )