cmake_minimum_required(VERSION 3.14)
project(differential_power_analysis C)

set(CMAKE_C_STANDARD 11)

add_executable(differential_power_analysis main.c)
configure_file(T4.dat ${CMAKE_CURRENT_BINARY_DIR}/T4.dat COPYONLY)
configure_file(inputs4.dat ${CMAKE_CURRENT_BINARY_DIR}/inputs4.dat COPYONLY)