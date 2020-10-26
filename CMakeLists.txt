cmake_minimum_required (VERSION 3.5)

project(KartwitchBot)

add_compile_options(-lpthread)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_BUILD_TYPE Release)

add_subdirectory(lib/twitchIRC)
add_subdirectory(lib/yaml-cpp)

add_executable (KartwitchBot main.cpp src/helper/config.cpp)

target_link_libraries(KartwitchBot twitchIRC yaml-cpp)

# moves the new compile_commands.json file from build folder to the project source
add_custom_command(TARGET KartwitchBot POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
    ${CMAKE_BINARY_DIR}/compile_commands.json
    ${PROJECT_SOURCE_DIR}/compile_commands.json
)

# moves the binary to the ./bin/ folder
add_custom_command(TARGET KartwitchBot POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
    ${CMAKE_BINARY_DIR}/KartwitchBot
    ${PROJECT_SOURCE_DIR}/bin/KartwitchBot
)
