cmake_minimum_required(VERSION 3.14)

project(
    "cipherhouse"
    VERSION 0.1.0
    LANGUAGES C
)

include(CTest)
enable_testing()

set(CMAKE_C_STANDARD 99)

set(CH_BUILD_SHARED_LIBS ON)
set(CH_BUILD_TESTS ON)
set(CMAKE_BUILD_TYPE Release)

file(GLOB SRC
    "src/*.h"
    "src/*.c"
)


add_library(
    ${PROJECT_NAME}
    ${SRC}
)

target_include_directories(${PROJECT_NAME}
    PUBLIC ${PROJECT_SOURCE_DIR}/include
)

if(CH_BUILD_TESTS)
    add_executable(affine tests/affine.c)
    add_executable(atbash tests/atbash.c)


    target_link_libraries(affine ${PROJECT_NAME})
    target_link_libraries(atbash ${PROJECT_NAME})


    add_test("affine" affine)
    add_test("atbash" atbash)
endif()