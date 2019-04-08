cmake_minimum_required(VERSION 3.12)
project(TeamTutor)

set(CMAKE_CXX_STANDARD 17)

add_executable(TeamTutor main.cpp Villians/Monsters.cpp Villians/Monsters.h Villians/Bosses.cpp Villians/Bosses.h DirectionHandler/Move.cpp DirectionHandler/Move.h DirectionHandler/Town.cpp DirectionHandler/Town.h DirectionHandler/Location.cpp DirectionHandler/Location.h DirectionHandler/Woods.cpp DirectionHandler/Woods.h Heroes/User_Character.cpp Heroes/User_Character.h Villians/Goblin.cpp Villians/Goblin.h "Combat Handler/combatRunner.cpp" "Combat Handler/combatRunner.h" Villians/DarkElf.cpp Villians/DarkElf.h Villians/Orc.cpp Villians/Orc.h Villians/The_EX_Wife.cpp Villians/The_EX_Wife.h)