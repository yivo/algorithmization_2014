cmake_minimum_required(VERSION 2.8.4)
project(algorithmization_2014)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -stdlib=libc++")

set(SOURCE_FILES main.cpp)
add_executable(algorithmization_2014 ${SOURCE_FILES})

target_link_libraries(algorithmization_2014 yess)