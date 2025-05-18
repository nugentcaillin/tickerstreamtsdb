cmake_minimum_required(VERSION 3.1.0)

project(tickerstreamTSDB)

find_package(fmt CONFIG REQUIRED)

add_executable(tickerstreamTSDB src/tickerstreamTSDB.cpp)

target_link_libraries(tickerstreamTSDB PRIVATE fmt::fmt)
