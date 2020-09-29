cmake_minimum_required(VERSION 2.6)
project(datastructresandalgorithm)

set(INCLUDEDIR common)

include_directories(${INCLUDEDIR})

#add_definitions(-DCH01)
add_definitions(-DCH02)

add_subdirectory(ch01)
add_subdirectory(ch02)

add_executable(datastructresandalgorithm main.cpp)
target_link_libraries(datastructresandalgorithm ch01 ch02)

install(TARGETS datastructresandalgorithm RUNTIME DESTINATION bin)
