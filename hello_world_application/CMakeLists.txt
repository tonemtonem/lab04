cmake_minimum_required(VERSION 3.4)
project(hello_world_application)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/../formatter_ex_lib formatter_ex_lib_build)

add_executable(hello_world_app hello_world.cpp)

target_link_libraries(hello_world_app PRIVATE formatter_ex)
