
//
// Created by willi on 4/8/2019.
//

#include "The_EX_Wife.h"

using namespace std;

The_EX_Wife::The_EX_Wife()
    :Monsters(){

    monsterName = "Goblin King";
    currentHealth = 75.0;
    maxHealth = currentHealth;
    naturalAttack = 20.0;
    naturalDefense = 20.0;
    isMagical = false;
    isMagicResistant = true;
    //Crit Modifer is based out of 100
    critModifer = 10;
    isBoss = true;
}

