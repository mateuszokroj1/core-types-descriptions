project(examples)

add_executable(types-descriptions-examples main.cpp)

    target_link_libraries(types-descriptions-examples PRIVATE types-descriptions)
    set_target_properties(types-descriptions-examples PROPERTIES CXX_STANDARD 20)