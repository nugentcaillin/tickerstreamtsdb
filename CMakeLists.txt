cmake_minimum_required(VERSION 3.1.0)

project(tickerstreamTSDB)



add_executable(tickerstreamTSDB src/main.cpp src/DatabaseDrivers.cpp)


target_compile_features(tickerstreamTSDB PRIVATE cxx_std_20)
target_include_directories(tickerstreamTSDB PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
