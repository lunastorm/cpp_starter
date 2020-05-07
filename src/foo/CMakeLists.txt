file(GLOB HEADER_LIST CONFIGURE_DEPENDS "${cpp_starter_SOURCE_DIR}/include/foo/*.hpp")
file(GLOB SOURCE_LIST CONFIGURE_DEPENDS "${cpp_starter_SOURCE_DIR}/src/foo/*.cpp")
add_library(foo ${SOURCE_LIST} ${HEADER_LIST})
add_library(foo_test OBJECT ${SOURCE_LIST} ${HEADER_LIST})

target_compile_definitions(foo PRIVATE DOCTEST_CONFIG_DISABLE)
target_link_libraries(foo_test doctest)

get_property(doctest_include_dir TARGET doctest PROPERTY INTERFACE_INCLUDE_DIRECTORIES)
target_include_directories(foo PRIVATE ${doctest_include_dir})
target_include_directories(foo_test PRIVATE ${doctest_include_dir})
target_include_directories(foo PUBLIC "${cpp_starter_SOURCE_DIR}/include")
target_include_directories(foo_test PUBLIC "${cpp_starter_SOURCE_DIR}/include")