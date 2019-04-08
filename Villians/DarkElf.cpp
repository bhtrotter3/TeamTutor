//
// Created by willi on 4/8/2019.
//

#include "DarkElf.h"

using namespace std;

DarkElf::DarkElf()
    :Monsters() {

    monsterName = "Dark Elf";
    maxHealth = 40.0;
    naturalAttack = 14.0;
    naturalDefense = 20.0;
    isMagical = true;
    isMagicResistant = false;
}