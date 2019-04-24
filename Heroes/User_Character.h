#ifndef TEAMTUTOR_USER_CHARACTER_H
#define TEAMTUTOR_USER_CHARACTER_H

#include "string"
#include "../Inventory/Inventory.h"

class User_Character {

    //If you change this I will end you  -William
    //Modifiers and attack stats needed for character
protected:
    int naturalAttack = 6;
    int naturalDefense = 11;

    int currentAttack = 6;
    int currentDefense = 11;

    double maxHealth = 100;
    double currentHealth = 100;

    int weaponModifer = 0;
    int critModifer = 0;

    bool isMagical = false;

    std::string name = "Bill Trotter";

    //All players have an instance of inventory
    Inventory* inv;

public:

    //Functions below will modifer private variables, that is all
    void addAttack(int x);
    void resetAttack();
    void addDefense(int x);
    void resetDefense();
    void addWeaponModifer(int x);
    void resetWeaponModifer();
    void addCritModifer(int x);
    void resetCritModifer();
    void addHealth(int x);
    void minusHealth(int x);
    void addMaxHealth(int x);
    int getAttack();
    int getDefense();
    bool getIfMagical();
    std::string getName();
    double getHealth();
    double getMaxHealth();
    void resetUserStats1();
    void resetUserStats2();
    void resetUserStats3();

    void setHealthAfterCombat(double &x);

    //Heals character for half its health
    void healCharacter();
    void buildInventory();
    int getPots();
    void addPots(int pots);
    void usePots();
    int getGoblinEar();
    void lootGoblinEar();
    void lootBand();
    int getBand();

};


#endif //TEAMTUTOR_USER_CHARACTER_H
