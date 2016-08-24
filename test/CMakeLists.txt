find_package(Boost 1.61.0 REQUIRED COMPONENTS unit_test_framework)
if(Boost_FOUND)
  include_directories(${Boost_INCLUDE_DIRS})
  link_directories(${Boost_LIBRARY_DIRS})
endif(Boost_FOUND)

set (TEST_HEADERS
  ${CMAKE_SOURCE_DIR}/include/Fib.hpp
  ${CMAKE_SOURCE_DIR}/include/IterativeFib.hpp
  ${CMAKE_SOURCE_DIR}/include/RecursiveFib.hpp
)

set (TEST_SOURCES
  ${CMAKE_SOURCE_DIR}/src/IterativeFib.cpp
  ${CMAKE_SOURCE_DIR}/src/RecursiveFib.cpp
)


add_executable(FibIterativeTestSuite ${TEST_SOURCES} ${TEST_HEADERS} FibIterativeTestSuite.cpp)
add_executable(FibRecursiveTestSuite ${TEST_SOURCES} ${TEST_HEADERS} FibRecursiveTestSuite.cpp)

target_include_directories(FibIterativeTestSuite PRIVATE ${HEADER_FILES} ${Boost_INCLUDE_DIRS})
target_link_libraries(FibIterativeTestSuite ${Boost_LIBRARIES} ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY})

target_include_directories(FibRecursiveTestSuite PRIVATE ${HEADER_FILES} ${Boost_INCLUDE_DIRS})
target_link_libraries(FibRecursiveTestSuite ${Boost_LIBRARIES} ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY})

add_test(NAME test_fib_0_is_1 COMMAND "FibIterativeTestSuite")
add_test(NAME test_fib_1_is_1 COMMAND "FibIterativeTestSuite")

add_test(NAME test2_fib_0_is_1 COMMAND "FibRecursiveTestSuite")
add_test(NAME test2_fib_1_is_1 COMMAND "FibRecursiveTestSuite")
