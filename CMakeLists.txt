cmake_minimum_required(VERSION 3.26)
project(Exercise2)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(src)

# ============================
# Testing
# ============================

include(FetchContent)
FetchContent_Declare(
        Catch2
        GIT_REPOSITORY https://github.com/catchorg/Catch2.git
        GIT_TAG v3.3.2
)
FetchContent_MakeAvailable(Catch2)

enable_testing()
add_subdirectory(tests)
