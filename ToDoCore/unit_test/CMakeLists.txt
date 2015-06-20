set(GMOCK_DIR "../../gmock-1.7.0"
    CACHE PATH  "The path to the Google Mock test framework.")

if ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "MSVC")
    # force this option to ON so that Google Test will use /MD instead of /MT
    # /MD is now the default for Visual Studio, so it should be our default, too
    option(gtest_force_shared_crt
           "Use shared (DLL) run-time lib even when Google Test is built as static lib."
           ON)
elseif (APPLE)
    add_definitions(-DGTEST_USE_OWN_TR1_TUPLE=1)
endif()

add_subdirectory(${GMOCK_DIR} ${CMAKE_BINARY_DIR}/gmock)

include_directories(SYSTEM ${GMOCK_DIR}/gtest/include
                           ${GMOCK_DIR}/include)

add_executable(ToDoTest ToDoTest.cpp)
target_link_libraries(ToDoTest toDoCore
                               gmock_main)

add_test(ToDoTest ToDoTest)