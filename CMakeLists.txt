cmake_minimum_required(VERSION 3.5.0)
project(Time_Benchmarking VERSION 0.1.0 LANGUAGES C CXX)
include_directories(${PROJECT_SOURCE_DIR}/inc)


add_library(${PROJECT_NAME}  STATIC 
    ${PROJECT_SOURCE_DIR}/inc/benchmark.hpp
    ${PROJECT_SOURCE_DIR}/src/benchmark.cpp
)

target_include_directories(${PROJECT_NAME} 
    PUBLIC 
    ${CMAKE_CURRENT_SOURCE_DIR}/inc
)


