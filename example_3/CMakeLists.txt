cmake_minimum_required(VERSION 3.10)
project(cmake_example_3 VERSION 0.0.1 LANGUAGES CXX)

add_subdirectory(thirdparty/spdlog)

#target_compile_option(project_options INTERFACE 

FILE(GLOB SRCFILES src/*.cpp) # get all *.cpp files from src folder
add_executable(example_3 ${SRCFILES}) # compile all of them and generate a main executable
target_link_libraries(example_3 PRIVATE spdlog)
target_include_directories(example_3 PRIVATE header) # user header folder to locate headers
