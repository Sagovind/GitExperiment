cmake_minimum_required(VERSION 3.15)
project(ci_cd_cpp_demo VERSION 1.0 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(mathlib src/math.cpp)

target_include_directories(mathlib PUBLIC src)

add_executable(ci_cd_cpp_demo src/main.cpp)
target_link_libraries(ci_cd_cpp_demo PRIVATE mathlib)

enable_testing()

# Unit test target
find_package(GTest REQUIRED)
add_executable(test_math tests/test_math.cpp)
target_link_libraries(test_math PRIVATE mathlib GTest::gtest_main)
add_test(NAME math_test COMMAND test_math)
