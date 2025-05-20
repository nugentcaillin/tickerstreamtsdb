cmake_minimum_required(VERSION 3.1.0)

project(tickerstreamTSDB)


find_package(influx_db_client CONFIG REQUIRED)

add_executable(tickerstreamTSDB src/main.cpp)


target_compile_features(tickerstreamTSDB PRIVATE cxx_std_20)

target_link_libraries(tickerstreamTSDB PRIVATE influx_db_client::influx_db_client)
