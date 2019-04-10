//
// Created by willi on 4/8/2019.
//

#include "The_EX_Wife.h"

using namespace std;

The_EX_Wife::The_EX_Wife()
    :Bosses(){

    monsterName = "Hydra";
    currentHealth = 220.0;
    maxHealth = currentHealth;
    naturalAttack = 56.0;
    naturalDefense = 80.0;
    isMagical = true;
    isMagicResistant = true;
    critModifier = 2;
}