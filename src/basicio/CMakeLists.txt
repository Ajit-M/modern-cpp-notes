project(cpp_basics)


add_library(basicio printName.cpp)

target_include_directories(basicio
    PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR} ../../include)

