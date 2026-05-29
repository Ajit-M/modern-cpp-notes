project(cpp_basic)

add_executable(basicio_main basicio.cpp)
add_executable(dataType dataTypes.cpp)


target_link_libraries(basicio_main
    PRIVATE
    basicio
)

