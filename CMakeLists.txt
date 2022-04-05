cmake_minimum_required(VERSION 3.10)

project(electric_guitar VERSION 1.0)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src/inc)

set(SRC
  src/main.cpp
  src/electric_guitar.cpp
)

add_executable(${PROJECT_NAME} ${SRC})

target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_20)