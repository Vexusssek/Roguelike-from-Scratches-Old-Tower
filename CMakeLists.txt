cmake_minimum_required(VERSION 3.16)

project(OldTower LANGUAGES CXX)

find_package(Threads REQUIRED)

add_executable(old-tower
    src/main.cpp
    src/core/Game.cpp
    src/debug/Testy.cpp
    src/entities/Istota.cpp
    src/entities/Player.cpp
    src/entities/Potwor.cpp
    src/entities/Potwory.cpp
    src/platform/ConsoleBuffer.cpp
    src/platform/Platform.cpp
    src/systems/Ekwipunek.cpp
    src/systems/Kostka.cpp
    src/systems/Przedmiot.cpp
    src/systems/Shop.cpp
    src/systems/Walka.cpp
    src/world/Map.cpp
)

target_include_directories(old-tower PRIVATE include)
target_compile_features(old-tower PRIVATE cxx_std_17)
set_target_properties(old-tower PROPERTIES CXX_EXTENSIONS OFF)
target_link_libraries(old-tower PRIVATE Threads::Threads)

if(MSVC)
    target_compile_options(old-tower PRIVATE /utf-8)
endif()
