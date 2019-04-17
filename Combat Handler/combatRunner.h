//
// Created by willi on 4/8/2019.
//

#ifndef TEAMTUTOR_COMBATRUNNER_H
#define TEAMTUTOR_COMBATRUNNER_H

#include "../Villians/Monsters.h"
#include "../Villians/Goblin.h"
#include "../Villians/DarkElf.h"
#include "../Villians/Orc.h"
#include "../Villians/The_EX_Wife.h"
#include "../Heroes/User_Character.h"


using namespace std;

//This is a class that needs to be a singleton
//NOTE!!!! I dont think this needs to be a singleton
//The one object created will ensure that this class handles everything within one class
class combatRunner {

    //These are values that are calculated by the class and then assigned to the class
private:
    double damageToUser;
    double damageToOpponent;
    combatRunner();
    User_Character user;

public:

    combatRunner& getInstance();

    //The function below only contains functions and not real code, DOES COMBAT MENU
    void combat(Monsters &opponent);

    //Calculate damages and sets damageToUser and damageToOpponent
    void calculateDamage(Monsters &opponent);

    //Minus health from combat
    void setNewHealthValuesFromCombat(double &userDamage, double &opponentDamage, Monsters &opponent);


    double returnDamageToUser();
    double returnDamageToOpponent();
    double findUserCurrentHealth();
    double findUserMaxHealth();
};


#endif //TEAMTUTOR_COMBATRUNNER_H
