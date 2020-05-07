add_executable(cpp_starter main.cpp)
target_link_libraries(cpp_starter foo)

add_executable(cpp_starter_test test.cpp)
target_link_libraries(cpp_starter_test foo_test)