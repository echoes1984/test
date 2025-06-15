cmake_minimum_required(VERSION 3.10)
project(HelloMaster)

set(CMAKE_CXX_STANDARD 11)

add_executable(hello src/hello.cc)
target_link_libraries(hello ${TBB_Libraries})