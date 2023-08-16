cmake_minimum_required(VERSION 3.10)
project(GUI VERSION 1.0)
set(CMAKE_CXX_STANDARD 20)
find_package(wxWidgets REQUIRED COMPONENTS net core base)
include(${wxWidgets_USE_FILE})
include_directories( ${PROJECT_SOURCE_DIR}/include 
                    ${PROJECT_SOURCE_DIR}/src)
file(GLOB all_SRCS
    "${PROJECT_SOURCE_DIR}/include/*.h"
    "${PROJECT_SOURCE_DIR}/include/*.hpp"
    "${PROJECT_SOURCE_DIR}/src/*.cpp"
    "${PROJECT_SOURCE_DIR}/src/*.c")


add_executable(GUI ${all_SRCS})
target_link_libraries(GUI ${wxWidgets_LIBRARIES})

