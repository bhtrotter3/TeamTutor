#ifndef TEAMTUTOR_INVENTORY_H
#define TEAMTUTOR_INVENTORY_H
//class User_Character;
//#include "../Weapons/bowandarrow.h"
//#include "../Weapons/rapiersword.h"
//#include "../Weapons/wand.h"

//Inventory is built in User, so it can't include User in it's code. If you try to just globally include the user class
// it'll recognize the function, but we are still only building one User, and it can't get to these functions.
//Your current logic is like this: Shell A holds Object A, Shell B has commands for Object A,
// Shell A doesn't know Shell B exists, Shell B dodsn't know where Object A is.
//It's like giving a chicken commands before you have an egg
//with the way you wrote the functions, all the weapon code in INV should be in User, and then you build the Weapon Class in User
//
//Ideally, but I don't know if you have time to rewrite this, since you tried to cram it all into the last couple days,
//you'd do something like what you have, with Weapon building from inventory, but instead of using User as a param,
//you'd need to either pass the variables or use inheritance. But for now, just move it out of Inv and into user, since that's
//a lot of rewriting.
//I don't have time to fix this myself.


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
