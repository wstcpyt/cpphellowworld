cmake_minimum_required(VERSION 3.1 FATAL_ERROR)
project(helloworld)

enable_testing()

include_directories(${CMAKE_CURRENT_SOURCE_DIR})
add_subdirectory(ToDoCore)
add_executable(helloworld main.cpp)
target_link_libraries(helloworld toDoCore)
add_test(helloworldTest helloworld)

set(CONFIGURED_ONCE TRUE CACHE INTERNAL
    "A flag showing that CMake has configured at least once.")