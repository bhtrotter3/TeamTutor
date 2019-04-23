//
// Created by willi on 4/17/2019.
//

#ifndef TEAMTUTOR_INVENTORY_H
#define TEAMTUTOR_INVENTORY_H

#include "../Weapons/bowandarrow.h"
#include "../Weapons/rapiersword.h"
#include "../Weapons/wand.h"
#include "../Heroes/User_Character.h"

class Inventory {

protected:
    int potions = 0;
    int goblinEar = 0;
    int ogreWeddingBand = 0;
    Inventory();

public:

    Inventory& getInstance();
    int getPotions();
    void usePotion();
    void addPotions(int pots);
    int getGoblinEar();
    void lootGoblinEar();
    void lootBand();
    int getBand();

    void getWand(User_Character &user);
    void getRapierSword(User_Character &user);
    void getBowAndArrow(User_Character &user);
};


#endif //TEAMTUTOR_INVENTORY_H
