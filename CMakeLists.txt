cmake_minimum_required(VERSION 3.12)
project(TeamTutor)

set(CMAKE_CXX_STANDARD 17)

add_executable(TeamTutor main.cpp Villians/Monsters.cpp Villians/Monsters.h
        Heroes/User_Character.cpp Heroes/User_Character.h Villians/Goblin.cpp Villians/Goblin.h
        "Combat Handler/combatRunner.cpp" "Combat Handler/combatRunner.h" Villians/DarkElf.cpp
        Villians/DarkElf.h Villians/Orc.cpp Villians/Orc.h Villians/The_EX_Wife.cpp Villians/The_EX_Wife.h
        DirectionHandler/Maps.cpp DirectionHandler/Maps.h DirectionHandler/Control.cpp DirectionHandler/Control.h Inventory/Inventory.cpp Inventory/Inventory.h Weapons/baseWeaponClass.cpp Weapons/baseWeaponClass.h Weapons/littleSword.cpp Weapons/littleSword.h Weapons/bigSword.cpp Weapons/bigSword.h)