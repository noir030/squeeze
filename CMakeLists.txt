cmake_minimum_required(VERSION 3.10)

project(Squeeze)

set(CMAKE_CXX_STANDARD 17)

find_package(ZLIB REQUIRED)

add_executable(squeeze src/main.cpp src/squeeze.cpp)

target_include_directories(squeeze PUBLIC ${PROJECT_SOURCE_DIR}/include)
target_link_libraries(squeeze PRIVATE ZLIB::ZLIB)