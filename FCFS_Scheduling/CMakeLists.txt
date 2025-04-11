cmake_minimum_required(VERSION 3.10)

project(FCFS_Scheduling VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(include)

add_executable(FCFS_Scheduling
    src/main.cpp
    src/FCFS_Scheduler.cpp
    src/Process.cpp
    src/Queue.cpp  # Optional if you are using a queue
)
