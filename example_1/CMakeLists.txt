cmake_minimum_required(VERSION 3.10)
project(cmake_example_1 VERSION 0.0.1 LANGUAGES CXX)

FILE(GLOB SRCFILES src/*.cpp) # get all *.cpp files from src folder
add_executable(example_1 ${SRCFILES}) # compile all of them and generate a main executable
