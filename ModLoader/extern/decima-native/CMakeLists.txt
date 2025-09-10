cmake_minimum_required(VERSION 3.20)
project(decima_native)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(GAME_ROOT_DIRECTORY "" CACHE STRING "Path to the game's root directory")

add_definitions(-D_CRT_SECURE_NO_WARNINGS -DWIN32_LEAN_AND_MEAN -DWIN32_EXTRA_LEAN)
add_subdirectory(libs)

add_library(decima_native SHARED
        libs/detours/src/disolia64.cpp
        libs/detours/src/disolx64.cpp
        libs/detours/src/detours.cpp
        libs/detours/src/disolx86.cpp
        libs/detours/src/disolarm.cpp
        libs/detours/src/creatwth.cpp
        libs/detours/src/disolarm64.cpp
        libs/detours/src/image.cpp
        libs/detours/src/disasm.cpp
        libs/detours/src/modules.cpp

        source/Core/RTTI.cpp
        source/Offsets.cpp
        source/XUtil.cpp
        source/exports.c
        source/main.cpp
)

target_include_directories(decima_native PRIVATE source libs/detours/src)
target_link_libraries(decima_native PRIVATE detours)
set_target_properties(decima_native PROPERTIES MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")

IF (NOT ${GAME_ROOT_DIRECTORY} STREQUAL "")
    add_custom_command(TARGET decima_native POST_BUILD
            COMMAND ${CMAKE_COMMAND} -E copy
            $<TARGET_FILE:decima_native>
            "\"${GAME_ROOT_DIRECTORY}\\winhttp.dll\""
    )
ENDIF ()