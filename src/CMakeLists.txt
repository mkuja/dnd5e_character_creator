


cmake_minimum_required(VERSION 3.20)
project(dnd5e_character_creator)

set(CMAKE_CXX_STANDARD 20)

add_executable(dnd5e_character_creator
        main.cpp
        Character/Stats.h
        Character/Classes.h
        Character/Races.h
        Character/BaseCharacter.cpp
        Character/BaseCharacter.h
        Character/RacialStatsCharacter.cpp
        Character/RacialStatsCharacter.h)
add_library(lib_dnd5e_character_creator
        Character/Stats.h
        Character/Classes.h
        Character/Races.h
        Character/BaseCharacter.cpp
        Character/BaseCharacter.h
        Character/RacialStatsCharacter.cpp
        Character/RacialStatsCharacter.h)

#target_include_directories(multiply PUBLIC include)
