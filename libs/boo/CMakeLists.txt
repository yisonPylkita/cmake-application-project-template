project(boo)

set(VS_TEST_BOO_HEADERS
    include/boo/boo.hpp
)

add_library(${PROJECT_NAME} INTERFACE ${BOO_HEADERS})
add_library(cmake_vs_tests::boo ALIAS ${PROJECT_NAME})
target_include_directories(${PROJECT_NAME} INTERFACE include)