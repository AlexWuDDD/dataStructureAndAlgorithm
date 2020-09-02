cmake_minimum_required(VERSION 2.6)
project(datastructresandalgorithm)

add_definitions(-DCH01)

add_subdirectory(ch01)

add_executable(datastructresandalgorithm main.cpp)
target_link_libraries(datastructresandalgorithm ch01)

install(TARGETS datastructresandalgorithm RUNTIME DESTINATION bin)
