cmake_minimum_required(VERSION 3.14)

project(
    "cipherhouse"
    VERSION 0.1.0
    LANGUAGES C
)

include(CTest)
enable_testing()

set(CMAKE_C_STANDARD 99)

set(BUILD_SHARED_LIBS ON)
set(BUILD_STATIC_LIBS ON)
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

add_library(
    b64
    "${PROJECT_SOURCE_DIR}/vendor/b64/encode.c"
    "${PROJECT_SOURCE_DIR}/vendor/b64/decode.c"
    "${PROJECT_SOURCE_DIR}/vendor/b64/buffer.c"
)
target_include_directories(b64
    PUBLIC ${PROJECT_SOURCE_DIR}/vendor/b64
)

target_include_directories(${PROJECT_NAME}
    PUBLIC ${PROJECT_SOURCE_DIR}/include
)

if(CH_BUILD_TESTS)
    add_executable(affine tests/affine.c)
    add_executable(atbash tests/atbash.c)
    add_executable(bacon tests/bacon.c)
    add_executable(base64 tests/base64.c)
    add_executable(caesar tests/caesar.c)
    add_executable(rot13 tests/rot13.c)

    target_link_libraries(affine ${PROJECT_NAME})
    target_link_libraries(atbash ${PROJECT_NAME})
    target_link_libraries(bacon ${PROJECT_NAME})
    target_link_libraries(base64 ${PROJECT_NAME})
    target_link_libraries(caesar ${PROJECT_NAME})
    target_link_libraries(rot13 ${PROJECT_NAME})

    add_test("affine" affine)
    add_test("atbash" atbash)
    add_test("bacon" bacon)
    add_test("base64" base64)
    add_test("caesar" caesar)
    add_test("rot13" rot13)
endif()

target_link_libraries(${PROJECT_NAME} b64)

install(TARGETS b64 ${PROJECT_NAME})
