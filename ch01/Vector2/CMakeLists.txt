cmake_minimum_required(VERSION 2.6)
project(Vector2)

aux_source_directory(. SRCS)

add_executable(test ${SRCS})
