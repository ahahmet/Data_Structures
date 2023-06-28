# CMAKE MINUMUM VERSIONS
cmake_minimum_required(VERSION 3.1)

# PROJECT NAME
project(test)

# ADD DEFINATIONS
add_definitions(-DTEST_STACK)
add_definitions(-DTEST_QUEUE)

set(CMAKE_POSITION_INDEPENDENT_CODE ON)

# ADD SUBDIRECTORIES
add_subdirectory(${PROJECT_SOURCE_DIR}/linkedlist)
add_subdirectory(${PROJECT_SOURCE_DIR}/stack)
add_subdirectory(${PROJECT_SOURCE_DIR}/queue)

# ADD EXECUTABLE FILE
add_executable(${PROJECT_NAME} main.cpp)

# LIBRARY LINKING
target_link_libraries(${PROJECT_NAME} PUBLIC linked_lists)
target_link_libraries(${PROJECT_NAME} PUBLIC stack)
target_link_libraries(${PROJECT_NAME} PUBLIC queue)

# END