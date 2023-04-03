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
# MSVC needs this to actually report the right value when using the __cplusplus pre-definition macro.
# See here for details: https://learn.microsoft.com/en-us/cpp/build/reference/zc-cplusplus
# TODO: @jellespijker check if this actually belongs in the vtu11 recipe or here
# TODO: @jellespijker check if this propagate downstream? If so add to cpp_info as well

target_include_directories(scripta
        INTERFACE
        $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

option(ENABLE_TESTS "Build with unit test" ON)