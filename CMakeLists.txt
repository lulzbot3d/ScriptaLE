# Copyright (c) 2024 UltiMaker
# Scripta is released under the AGPLv3 or higher
cmake_minimum_required(VERSION 3.23)
project(scripta CXX)

set(HDR
        include/scripta/logger.h
        include/scripta/vdi.h
        )

add_library(scripta INTERFACE ${HDR})

find_package(standardprojectsettings REQUIRED)
set_project_warnings(scripta)
enable_sanitizers(scripta)
target_compile_features(scripta INTERFACE cxx_std_20)
target_compile_options(scripta INTERFACE $<$<BOOL:${WIN32}>:/Zc:__cplusplus>)

target_include_directories(scripta
        INTERFACE
        $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

option(ENABLE_TESTS "Build with unit test" ON)