cmake_minimum_required(VERSION 2.8)
project(sqrt)

add_library(sqrt sqrt.cpp)

add_executable(clsqrt clsqrt.cpp)
target_link_libraries(clsqrt sqrt)

configure_file(sqrt-config.cmake.in "${PROJECT_BINARY_DIR}/sqrt-config.cmake")

install(TARGETS clsqrt DESTINATION bin/)
install(TARGETS sqrt DESTINATION lib/)
install(FILES sqrt.h DESTINATION include/)
install(FILES "${PROJECT_BINARY_DIR}/sqrt-config.cmake" DESTINATION lib/cmake/${PROJECT_NAME})
