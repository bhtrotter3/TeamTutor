#ifndef TEAMTUTOR_INVENTORY_H
#define TEAMTUTOR_INVENTORY_H
class User_Character;
#include "../Weapons/bowandarrow.h"
#include "../Weapons/rapiersword.h"
#include "../Weapons/wand.h"


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
