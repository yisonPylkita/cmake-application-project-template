project(foo)

set(VS_TEST_FOO_HEADERS
    include/foo/foo.hpp
)

set(VS_TEST_FOO_SOURCES
    src/foo.cpp
)

add_library(${PROJECT_NAME} STATIC ${VS_TEST_FOO_HEADERS} ${VS_TEST_FOO_SOURCES})
add_library(cmake_vs_tests::foo ALIAS ${PROJECT_NAME})
target_include_directories(${PROJECT_NAME} PUBLIC include)