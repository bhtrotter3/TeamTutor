//
// Created by willi on 4/8/2019.
//

#ifndef TEAMTUTOR_COMBATRUNNER_H
#define TEAMTUTOR_COMBATRUNNER_H

using namespace std;

//This is a class that needs to be a singleton
//NOTE!!!! I dont think this needs to be a singleton
//The one object created will ensure that this class handles everything within one class
class combatRunner {

    //These are values that are calculated by the class and then assigned to the class
private:
    double damageToUser;
    double damageToOpponent;

public:
    combatRunner();
    void combat(int userFinalAttack, int userFinalDefense, int opponentFinalAttack, int opponentFinalDefense, bool userMW, bool opponentMagical, bool opponentMR);
    void calculateDamage(int userFinalAttack, int userFinalDefense, int opponentFinalAttack, int opponentFinalDefense, bool userMW, bool opponentMagical, bool opponentMR);
    double returnDamageToUser();
    double returnDamageToOpponent();

};


#endif //TEAMTUTOR_COMBATRUNNER_H
