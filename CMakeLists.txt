cmake_minimum_required(VERSION 3.12)
project(TeamTutor)

set(CMAKE_CXX_STANDARD 17)

add_executable(TeamTutor main.cpp Villians/Monsters.cpp Villians/Monsters.h Villians/Bosses.cpp Villians/Bosses.h DirectionHandler/Move.cpp DirectionHandler/Move.h DirectionHandler/Town.cpp DirectionHandler/Town.h Combat/Combat.h DirectionHandler/Location.cpp DirectionHandler/Location.h DirectionHandler/Woods.cpp DirectionHandler/Woods.h)