# Copyright (c) 2024 UltiMaker
# Scripta is released under the AGPLv3 or higher
# Copyright (c) 2024 FAME3D LLC.
# ScriptaLE is released under the AGPLv3 or higher
cmake_minimum_required(VERSION 3.23)
project(scriptale CXX)

set(HDR
        include/scripta/logger.h
        include/scripta/vdi.h
        )

add_library(scriptale INTERFACE ${HDR})

find_package(standardprojectsettings REQUIRED)
set_project_warnings(scriptale)
enable_sanitizers(scriptale)
target_compile_features(scriptale INTERFACE cxx_std_20)
target_compile_options(scriptale INTERFACE $<$<BOOL:${WIN32}>:/Zc:__cplusplus>)
# MSVC needs this to actually report the right value when using the __cplusplus pre-definition macro.
# See here for details: https://learn.microsoft.com/en-us/cpp/build/reference/zc-cplusplus
# TODO: @jellespijker check if this actually belongs in the vtu11 recipe or here
# TODO: @jellespijker check if this propagate downstream? If so add to cpp_info as well

target_include_directories(scriptale
        INTERFACE
        $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

option(ENABLE_TESTS "Build with unit test" ON)