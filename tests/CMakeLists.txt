cmake_minimum_required(VERSION 3.19)

set(TEST_EXECUTABLE MainTest)

set(SOURCES
    MainTest.cpp
)

add_executable(${TEST_EXECUTABLE} ${SOURCES})

target_link_libraries(${TEST_EXECUTABLE} PRIVATE
    GTest::gtest_main
    # Link all project libraries below
)
