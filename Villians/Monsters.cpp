//
// Created by willi on 3/27/2019.
//

#include "Monsters.h"
#include <iostream>
#include <string>

using namespace std;

Monsters::Monsters()
{}
Monsters::Monsters(string a, double b){
    monsterName=a;
    currentHealth=b;
    maxHealth=b;
}

//Returns attack stat to the public
double Monsters::getAttack() {
    return naturalAttack;
}

//Returns defense stat to the public
double Monsters::getDefense() {
    return naturalDefense;
}

//Returns isMagical true/false to the public
bool Monsters::getIsMonsterMagical() {
    return isMagical;
}

//Retruns isMagicResistant true/false to the public
bool Monsters::getIsMonsterMagicResistant() {
    return isMagicResistant;
}

//Returns name to the public
string Monsters::getName() {
    return monsterName;
}