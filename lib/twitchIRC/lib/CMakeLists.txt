######################################################################
# @author      : worldpotato
# @file        : CMakeLists
# @created     : Monday Oct 26, 2020 22:06:20 CET
######################################################################

add_subdirectory(yaml-cpp)

if(TESTS)
    add_subdirectory(googletest)
endif()
