
cmake_minimum_required (VERSION 2.6)
project(Lab8 CXX)

include_directories(src include)
add_executable(Lab8 main.cpp src/gameobj.cpp include/main.h include/gameobj.h include/Bomb.h include/Boss.h include/Character.h include/HP.h include/Player.h include/Hurting.h)

set(LIBSRC include/main.h include/gameobj.h include/Bomb.h include/Boss.h include/Character.h include/HP.h include/Player.h include/Hurting.h src/gameobj.cpp)
add_library(lab8 ${LIBSRC})

target_link_libraries(Lab8 lab8)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}-DLIB_TEST -Wall")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG}")
set(CMAKE_CXX_FLAGS_RELEASE "-DNDEBUG -O2")
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

install(TARGETS Lab8 DESTINATION bin)

add_custom_target(info # ALL # target zoo is always built
    COMMAND echo "Build commands:"
    COMMAND cat compile_commands.json 
    COMMAND echo ""
    COMMAND echo ""
    COMMAND echo "Debug info:"
    COMMAND readelf --debug-dump=decodedline Lab8
    DEPENDS Lab8
)


