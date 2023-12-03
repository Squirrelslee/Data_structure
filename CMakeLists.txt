cmake_minimum_required(VERSION 3.16)

project(Data_Structure_BIG)

set(CMAKE_BUILD_TYPE Debug)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g")


include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(Data_exe Data_Structure.cpp )