cmake_minimum_required(VERSION 3.9)
project(cmake_vs_test)

add_subdirectory(libs)

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE cmake_vs_tests::boo)
target_link_libraries(${PROJECT_NAME} PRIVATE cmake_vs_tests::foo)