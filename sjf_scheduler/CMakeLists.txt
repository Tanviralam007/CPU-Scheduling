cmake_minimum_required(VERSION 3.10)
project(SJF_Scheduler VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(${PROJECT_SOURCE_DIR}/src)

add_executable(SJF_Scheduler
    src/main.cpp
    src/process.cpp
    src/scheduler.cpp
)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)