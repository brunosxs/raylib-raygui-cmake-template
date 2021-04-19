cmake_minimum_required(VERSION 3.5)

project(raylib_game CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(BUILD_EXAMPLES OFF CACHE BOOL "" FORCE) # don't build the supplied examples
add_subdirectory(thirdparty/raylib thirdparty/raylib/bin)
set(BUILD_RAYGUI_EXAMPLES OFF CACHE BOOL "" FORCE) # don't build raygui examples
add_subdirectory(thirdparty/raygui/projects/CMake)
set(SOURCES
    main.cpp
)
add_executable(${PROJECT_NAME} ${SOURCES})
target_link_libraries(${PROJECT_NAME} raylib raygui)
target_include_directories(${PROJECT_NAME} PRIVATE include/)
