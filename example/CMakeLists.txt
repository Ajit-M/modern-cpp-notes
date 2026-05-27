project(cpp_basic)

add_executable(basicio_main basicio.cpp)

target_link_libraries(basicio_main
    PRIVATE
    basicio
)

