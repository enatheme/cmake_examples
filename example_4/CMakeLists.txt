cmake_minimum_required(VERSION 3.10)
project(cmake_example_4 VERSION 0.0.1 LANGUAGES CXX)

FILE(GLOB SRCFILES src/*.cpp) # get all *.cpp files from src folder
find_package(Threads REQUIRED)
add_executable(example_4 ${SRCFILES}) # compile all of them and generate a main executable
target_link_libraries(example_4 ${CMAKE_THREAD_LIBS_INIT})
