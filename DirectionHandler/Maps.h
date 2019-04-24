#ifndef UNTITLED_MAPS_H
#define UNTITLED_MAPS_H
#include "Control.h"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "../Villians/Monsters.h"
#include "../Villians/Goblin.h"
#include "../Combat Handler/combatRunner.h"
#include "../Weapons/bowandarrow.h"
#include "../Weapons/rapiersword.h"
#include "../Weapons/wand.h"

class Maps: public Control { //inherits the basic movement functions, but lets me keep map data separate
                                //could maybe be one class, or possibly pass the variable around, but this seemed
                                //more efficient
protected:
    bool fightTime = false;
    bool questOne = false;
    bool isHero= false;
    bool npcQuest = false;
    bool t1 = true; //treasures
    bool t2 = true;
    bool t3 = true;
    combatRunner* combatRunner1;
public:
    Maps ();
    void worldMap();
    void townA();
    void goblinCave();
    bool randomEncounter(int rate);

};


#endif //UNTITLED_MAPS_H

