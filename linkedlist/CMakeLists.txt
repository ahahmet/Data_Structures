cmake_minimum_required(VERSION 3.1)

project(linked_lists)

set(SRC
    ./src/linked_list.cpp
)


add_library(${PROJECT_NAME} SHARED ${SRC})

target_include_directories(${PROJECT_NAME} PUBLIC ./inc)
