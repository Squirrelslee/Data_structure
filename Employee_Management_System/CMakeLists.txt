cmake_minimum_required(VERSION 3.16)

project(EMS)


include_directories(include)

add_executable(EmployeeManagerSystem 
                main.cpp 
                src/workManager.cpp
                src/Employee.cpp
                src/Manager.cpp
                src/Boss.cpp)