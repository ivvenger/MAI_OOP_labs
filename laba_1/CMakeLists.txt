cmake_minimum_required(VERSION 3.30)

project(lab_click)

add_executable(lab_click main.cpp)

cmake_minimum_required(VERSION 3.10)
project(MyTests)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(test_executable tests/TESTS.cpp)
target_link_libraries(test_executable ${GTEST_LIBRARIES} pthread)
