cmake_minimum_required ( VERSION 3.1.0...3.27.0 )
project(tune-world)

find_package(SDL2 REQUIRED)
include_directories(tune-world ${SDL2_INCLUDE_DIRS})

file(GLOB objs_SRC "${CMAKE_CURRENT_SOURCE_DIR}/src/include/*.o")

set(includes ${CMAKE_CURRENT_SOURCE_DIR}/src/include)
set(objs ${objs_SRC})
set(sources ${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/build")

include_directories(${includes})

add_executable(tune-world ${sources} ${objs})
target_link_libraries(tune-world ${SDL2_LIBRARIES})
