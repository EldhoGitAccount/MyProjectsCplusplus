cmake_minimum_required(VERSION 3.10)

project(MyCmakeMandelbrotProject VERSION 1.0 LANGUAGES CXX)

#include(CTest)
#enable_testing()

add_executable( MyCmakeMandelbrotProject ${PROJECT_SOURCE_DIR}/src/main.cpp ${PROJECT_SOURCE_DIR}/src/Bitmap.cpp )

set_property(TARGET MyCmakeMandelbrotProject PROPERTY CXX_STANDARD 14)

target_include_directories(MyCmakeMandelbrotProject PUBLIC include)