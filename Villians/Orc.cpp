//
// Created by willi on 4/8/2019.
//

#include "Orc.h"

using namespace std;

Orc::Orc()
    :Monsters(){

    monsterName = "Orc";
    currentHealth = 120.0;
    maxHealth = currentHealth;
    naturalAttack = 28.0;
    naturalDefense = 20.0;
    isMagical = false;
    isMagicResistant = false;

}