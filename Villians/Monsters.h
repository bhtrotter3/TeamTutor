//
// Created by willi on 3/27/2019.
// This is a generic class for monsters and how they are defined

#ifndef TEAMTUTOR_MONSTERS_H
#define TEAMTUTOR_MONSTERS_H

#include <iostream>
#include <string>

using namespace std;

class Monsters {

protected:
    string monsterName;
    double currentHealth;
    double maxHealth;
    bool isMagical;
    bool isMagicResistant;
    double naturalAttack;
    double naturalDefense;
    bool isBoss;
    int critModifer;

public:
    Monsters();
    Monsters(string a, double b);
    double getDefense();
    double getAttack();
    bool getIsMonsterMagical();
    bool getIsMonsterMagicResistant();
    string getName();
    double getHealth();
    double getMaxHealth();
    bool getIsBoss();
    int getCritModifier();

    void setMonsterHealthAfterCombat(double &x);
};


#endif //TEAMTUTOR_MONSTERS_H
