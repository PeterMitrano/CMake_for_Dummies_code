cmake_minimum_required(VERSION 2.8)
project(sqrt)

include_directories(include)

add_executable(hello_world hello_world.cpp)
add_executable(hello_world_fr hello_world.cpp)
target_compile_definitions(hello_world_fr PRIVATE FRENCH)

add_library(sqrt sqrt.cpp)

add_executable(clsqrt clsqrt.cpp)
target_link_libraries(clsqrt sqrt)

add_subdirectory(test)

configure_file(sqrt-config.cmake.in "${PROJECT_BINARY_DIR}/sqrt-config.cmake")

install(TARGETS clsqrt DESTINATION bin/)
install(TARGETS sqrt DESTINATION lib/)
install(FILES sqrt.h DESTINATION include/)
install(FILES "${PROJECT_BINARY_DIR}/sqrt-config.cmake" DESTINATION lib/cmake/${PROJECT_NAME})
