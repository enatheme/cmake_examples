cmake_minimum_required(VERSION 3.10)
project(cmake_example_5 VERSION 0.0.1 LANGUAGES CXX)

set(THIRDPARTY_FOLDER "thirdparty")
set(CRYPTOPP_FOLDER "${THIRDPARTY_FOLDER}/cryptopp")
add_custom_command(
            OUTPUT cryptopp.log
            COMMAND /bin/make -C "${CMAKE_CURRENT_SOURCE_DIR}/${CRYPTOPP_FOLDER}" -j
            COMMAND mkdir ${THIRDPARTY_FOLDER}
            COMMAND mkdir ${CRYPTOPP_FOLDER}
            COMMAND cp "${CMAKE_CURRENT_SOURCE_DIR}/${CRYPTOPP_FOLDER}/libcryptopp.a" "${CRYPTOPP_FOLDER}")

add_custom_target(run ALL DEPENDS cryptopp.log)
FILE(GLOB SRCFILES src/*.cpp) # get all *.cpp files from src folder
add_executable(example_5 ${SRCFILES}) # compile all of them and generate a main executable
target_link_libraries(example_5 PRIVATE cryptop)
target_include_directories(example_5 PRIVATE header ${CRYPTOPP_FOLDER}) # user header folder to locate headers
