cmake_minimum_required(VERSION 3.15)
project(hallo CXX)




add_library(hallo src/hallo.cpp)
target_include_directories(hallo PUBLIC include)



set_target_properties(hallo PROPERTIES PUBLIC_HEADER "include/hallo.h")
install(TARGETS hallo)
