#ifndef TEAMTUTOR_INVENTORY_H
#define TEAMTUTOR_INVENTORY_H


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

};


#endif //TEAMTUTOR_INVENTORY_H
