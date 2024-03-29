cmake_minimum_required(VERSION 3.10)
project(MyProject C)

# Add source files
file(GLOB SOURCES "src/*.c")

# Add CUnit library
find_library(CUNIT_LIBRARY NAMES cunit)

# Add test executable
file(GLOB TEST_SOURCES "test/*.c")
add_executable(unit_tests ${TEST_SOURCES})

# Link test executable with CUnit library
target_link_libraries(unit_tests ${CUNIT_LIBRARY})
