cmake_minimum_required(VERSION 3.12)
project(cpp_starter VERSION 0.1.0)

enable_testing()

if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)
    set(CMAKE_CXX_STANDARD 17)
    include(CTest)
endif()

add_subdirectory(extern/doctest)
add_subdirectory(src)
add_subdirectory(apps)

set(CMAKE_EXPORT_COMPILE_COMMANDS on)
