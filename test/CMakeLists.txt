cmake_minimum_required(VERSION 3.9.4)
project(my-app-test)

add_subdirectory(lib/googletest/googletest)
add_library(myapp ../my_app.cpp)
add_executable(my-app-test my_app_test.cpp)
target_link_libraries(my-app-test myapp gtest_main)
