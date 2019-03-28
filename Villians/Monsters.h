//
// Created by willi on 3/27/2019.
// This is a generic class for monsters and how they are defined

#ifndef TEAMTUTOR_MONSTERS_H
#define TEAMTUTOR_MONSTERS_H

#include <iostream>
#include <string>

using namespace std;

class Monsters {

private:
    string monsterName;
    double currentHealth;
    double maxHealth;
    bool isMagical;
    bool isMagicResistant;
    double naturalAttack;
    double naturalDefense;

public:
    Monsters();
    Monsters(string a, double b);
};


#endif //TEAMTUTOR_MONSTERS_H
