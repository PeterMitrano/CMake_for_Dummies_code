cmake_minimum_required(VERSION 2.8)
project(sqrt)

include_directories(include)


add_library(sqrt sqrt.cpp)
target_include_directories(sqrt INTERFACE
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/sqrt>
  $<INSTALL_INTERFACE:include/sqrt>)

add_subdirectory(test)


configure_file(sqrt-config.cmake.in "${PROJECT_BINARY_DIR}/sqrt-config.cmake" @ONLY)
install(TARGETS sqrt EXPORT sqrt-targets DESTINATION lib/${PROJECT_NAME})
install(FILES include/sqrt/sqrt.h DESTINATION include/sqrt)
install(FILES "${PROJECT_BINARY_DIR}/sqrt-config.cmake" DESTINATION lib/${PROJECT_NAME})
install(EXPORT sqrt-targets NAMESPACE sqrt:: DESTINATION lib/${PROJECT_NAME})

