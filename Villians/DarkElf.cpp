//
// Created by willi on 4/8/2019.
//

#include "DarkElf.h"

using namespace std;

//THIS IS ALL THE DARK ELF STATS FOR SETUP

DarkElf::DarkElf()
    :Monsters() {

    monsterName = "Dark Elf";
    currentHealth = 20.0;
    maxHealth = currentHealth;
    naturalAttack = 10.0;
    naturalDefense = 10.0;
    isMagical = true;
    isMagicResistant = false;
    isBoss=false;
}