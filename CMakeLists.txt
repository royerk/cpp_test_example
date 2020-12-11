cmake_minimum_required(VERSION 3.17)
project(toto_with_test)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp tests/unit_tests/test_example.cpp)
add_executable(toto_with_test_run ${SOURCE_FILES})

include_directories(src)

add_subdirectory(src)
add_subdirectory(tests)

target_link_libraries(${CMAKE_PROJECT_NAME}_run ${CMAKE_PROJECT_NAME}_lib)