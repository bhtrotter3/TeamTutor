//
// Created by willi on 4/8/2019.
//

#include "Orc.h"

using namespace std;

Orc::Orc()
    :Monsters(){

    monsterName = "Orc";
    currentHealth = 40.0;
    maxHealth = currentHealth;
    naturalAttack = 12.0;
    naturalDefense = 15.0;
    isMagical = false;
    isMagicResistant = false;
    isBoss = false;

}