cmake_minimum_required(VERSION 3.1)

project(queue)

set(SRC
    ./src/queue.cpp
)


add_library(${PROJECT_NAME} SHARED ${SRC})

target_include_directories(${PROJECT_NAME} PUBLIC ./inc)