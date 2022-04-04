# Include googletest

#include(FetchContent)
#
#FetchContent_Declare(
#        googletest
#        GIT_REPOSITORY https://github.com/google/googletest.git
#        GIT_TAG        release-1.11.0
#)
#FetchContent_MakeAvailable(googletest)
add_subdirectory(googletest)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
add_library(GTest::GTest INTERFACE IMPORTED)
target_link_libraries(GTest::GTest INTERFACE gtest_main)

###########
add_executable(dnd5e_character_creator_tests
        Tests.cpp
        ../src/Character/BaseCharacter.cpp ../src/Character/BaseCharacter.h
        ../src/Character/RacialStatsCharacter.cpp ../src/Character/RacialStatsCharacter.h
        TestBaseCharacter.cpp
        TestRacialStatsCharacter.cpp)

target_link_libraries(dnd5e_character_creator_tests gtest_main)

#add_test(DnD5e_Character_Creator_tests dnd5e_character_creator_tests)


include(GoogleTest)
#gtest_discover_tests(Tests)

gtest_add_tests(dnd5e_character_creator_tests
        SOURCES Tests.cpp)

#gtest_add_tests(TARGET target
#        [SOURCES src1...]
#        [EXTRA_ARGS arg1...]
#        [WORKING_DIRECTORY dir]
#        [TEST_PREFIX prefix]
#        [TEST_SUFFIX suffix]
#        [SKIP_DEPENDENCY]
#        [TEST_LIST outVar]
#        )
