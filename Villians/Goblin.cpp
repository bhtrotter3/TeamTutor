//
// Created by willi on 4/6/2019.
//

#include "Goblin.h"

using namespace std;

//Intialization for Goblin

Goblin::Goblin()
    :Monsters(){

    monsterName = "Goblin";
    naturalAttack = 7.0;
    naturalDefense = 10.0;
    currentHealth = 10.0;
    maxHealth = currentHealth;
    isMagical = false;
    isMagicResistant = false;
    isBoss = false;
}
