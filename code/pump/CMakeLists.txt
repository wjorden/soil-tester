cmake_minimum_required(VERSION 3.12)

file(GLOB SRC_FILES *.c)
add_library(Pump ${SRC_FILES})
target_include_directories(Pump PUBLIC include/)

