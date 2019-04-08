//
// Created by willi on 4/3/2019.
//

#ifndef TEAMTUTOR_USER_CHARACTER_H
#define TEAMTUTOR_USER_CHARACTER_H


class User_Character {

    //If you change this I will end you  -William
    //Modifiers and attack stats needed for character
private:
    int naturalAttack = 6;
    int naturalDefense = 11;

    int currentAttack = 6;
    int currentDefense = 11;

    double maxHealth = 20;
    double currentHealth = 20;

    int weaponModifer = 0;
    int critModifer = 0;

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


    //Functions below actually do things



};


#endif //TEAMTUTOR_USER_CHARACTER_H
