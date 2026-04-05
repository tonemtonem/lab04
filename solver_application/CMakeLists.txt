cmake_minimum_required(VERSION 3.4)
project(solver_application)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/../formatter_ex_lib formatter_ex_lib_build)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/../solver_lib solver_lib_build)

add_executable(solver_app equation.cpp)

target_link_libraries(solver_app PRIVATE formatter_ex solver)
