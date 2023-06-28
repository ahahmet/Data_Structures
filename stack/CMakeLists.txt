cmake_minimum_required(VERSION 3.1)

project(stack)

set(SRC
    ./src/stack.cpp
)

set(CMAKE_POSITION_INDEPENDENT_CODE ON)

add_library(${PROJECT_NAME} SHARED ${SRC})
set_property(TARGET stack PROPERTY POSITION_INDEPENDENT_CODE ON)


target_include_directories(${PROJECT_NAME} PUBLIC ./inc)