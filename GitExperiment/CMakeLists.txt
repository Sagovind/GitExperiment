cmake_minimum_required(VERSION 3.15)
project(ci_cd_cpp_demo LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED YES)
set(CMAKE_CXX_EXTENSIONS NO)

add_library(mathlib STATIC src/math.cpp)

target_include_directories(mathlib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)

add_executable(app src/main.cpp)
target_link_libraries(app PRIVATE mathlib)

enable_testing()
find_package(GTest REQUIRED)

add_executable(test_math tests/test_math.cpp tests/test_math_assert.cpp)
target_link_libraries(test_math PRIVATE mathlib GTest::GTest GTest::Main)
add_test(NAME math_test COMMAND test_math)
