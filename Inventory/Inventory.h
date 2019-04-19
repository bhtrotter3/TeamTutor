//
// Created by willi on 4/17/2019.
//

#ifndef TEAMTUTOR_INVENTORY_H
#define TEAMTUTOR_INVENTORY_H


class Inventory {

protected:
    int potions = 0;

public:
    Inventory();
    int getPotions();
    void usePotion();
    void addPotions(int pots);

};


#endif //TEAMTUTOR_INVENTORY_H
