cmake_minimum_required(VERSION 3.16)
project(CollatzConjecture VERSION 1.0.0 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

add_library(phicollatz STATIC src/phi_collatz.cpp)
add_executable(collatz src/main.cpp)
target_link_libraries(collatz phicollatz)

enable_testing()
add_executable(test_collatz tests/test_collatz.cpp)
target_link_libraries(test_collatz phicollatz)
add_test(NAME Collatz COMMAND test_collatz)
