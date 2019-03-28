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

