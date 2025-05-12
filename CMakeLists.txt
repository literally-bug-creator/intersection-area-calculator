cmake_minimum_required(VERSION 3.14)
project(intersection-area-calculator)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include(FetchContent)

FetchContent_Declare(
    Catch2
    GIT_REPOSITORY https://github.com/catchorg/Catch2.git
    GIT_TAG        v3.8.1
)
FetchContent_MakeAvailable(Catch2)

add_library(intersection-area-calculator
    src/main.cpp
    src/error.cpp
)

target_include_directories(intersection-area-calculator PUBLIC include)
