cmake_minimum_required(VERSION 3.16)
project(dnd5e_character_creator)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

enable_testing()

include_directories(build/_deps/googletest-src/googletest/include)
add_subdirectory(src)
add_subdirectory(tests)

