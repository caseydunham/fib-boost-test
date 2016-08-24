cmake_minimum_required(VERSION 3.2.3)
project(fib-boost-test)


set (HEADER_FILES
  include/Fib.hpp
  include/IterativeFib.hpp
  include/RecursiveFib.hpp
)
include_directories(include)

set (SOURCE_FILES
  src/main.cpp
  src/IterativeFib.cpp
  src/RecursiveFib.cpp
)

add_executable(fib-boost-test ${SOURCE_FILES} ${HEADER_FILES})

enable_testing()
add_subdirectory(test)
