//
// Created by willi on 4/8/2019.
//

#include "combatRunner.h"
#include <iostream>
#include <string>

using namespace std;

//
//intialization
combatRunner::combatRunner() {

    damageToOpponent = 0.0;
    damageToUser = 0.0;
}

//
//This function sole mission is to run functions, everthing else is defined else where
void combatRunner::combat(int userFinalAttack, int userFinalDefense, int opponentFinalAttack, int opponentFinalDefense, bool userMW, bool opponentMagical, bool opponentMR) {

    //This function is to run programs and do nothing else
    //The whole purpose of this being here is that this is the final layer that holds combat in place

    string answer, userName, opponentName;

    //Never ending loop that will check to see if the user wants to flee for to attack
    while (true) {

        cout << "========================" << '\n';
        cout << "=                      =" << "\n";
        cout << "= ATTACK / FLEE / HEAL =" << '\n';
        cout << "=                      =" << '\n';
        cout << "========================" << '\n' << '\n' << userName + " VERSUS " + opponentName;
        cout << "What would you like to do: ";

        cin >> answer;

        //Code needed to convert uppperToLowerCase
        locale settings;
        std::string converted;
        for (short i = 0; i < answer.size(); ++i)
            converted += (std::toupper(answer[i], settings));


        if (converted == "ATTACK" || converted == "A") {
            //First we have to calc damage
            //calculateDamage(userFinalAttack, userFinalDefense, opponentFinalAttack, opponentFinalDefense, userMW, opponentMagical, opponentMR);

            //Then we have to set damage to monster and user

        }

        if (converted == "FLEE" || converted =="F"){
            cout << '\n' << '\n' << "You have fled." << '\n';
            break;
        }

    }
}

//
//This function will

//
//Function is defined as calculating damage based on information passed
void combatRunner::calculateDamage(int userFinalAttack, int userFinalDefense, int opponentFinalAttack, int opponentFinalDefense, bool userMW, bool opponentMagical, bool opponentMR){

    //Calculating the damage the user will do to the opponent
    //opponent Damage = damage done to the opponent
    double opponentDamage = (userFinalAttack*4 - opponentFinalDefense*2) + 1;
    if (opponentDamage < 3)
        opponentDamage = 2;

    double userDamage = (opponentFinalAttack*4 - userFinalDefense*2) + 1;
    if (userDamage < 4)
        userDamage = 3;

    //Statements below check to see if magical weapons are used
    //Magical weapons add a 10% increase to damage
    //Statements only happen if someone has a magical weapon and the other doesnt.
    if (userMW == true && opponentMR == false)
    {
        opponentDamage += opponentDamage*0.1;
    }

    if (opponentMagical == true && userMW == false)
    {
        userDamage+=0.1;
    }

    this->damageToUser = damageToUser;
    this->damageToOpponent = opponentDamage;

}

//
//Returns damage that was dealt to the user
double combatRunner::returnDamageToUser(){
    return this->damageToUser;
}

//
//Returns damage that was dealt to the opponent
double combatRunner::returnDamageToOpponent(){
    return this->damageToOpponent;
}
