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

combatRunner& combatRunner::getInstance() {
    static combatRunner combatInstance;
    return combatInstance;
}

//
//This function sole mission is to run functions, everthing else is defined else where
void combatRunner::combat(Monsters &opponent) {

    //This function is to run programs and do nothing else
    //The whole purpose of this being here is that this is the final layer that holds combat in place

    string answer;

    //Never ending loop that will check to see if the user wants to flee for to attack
    while (true) {

        cout << "========================" << '\n';
        cout << "=                      =" << "\n";
        cout << "= ATTACK / FLEE / HEAL =" << '\n';
        cout << "=                      =" << '\n';
        cout << "========================" << '\n' << '\n' << user.getName() + " VERSUS " + opponent.getName() << '\n' << endl;
        cout << "What would you like to do: ";

        cin.clear();
        cin >> answer;

        //Code needed to convert uppperToLowerCase
        locale settings;
        std::string converted;
        for (short i = 0; i < answer.size(); ++i)
            converted += (std::toupper(answer[i], settings));

        //IF USER DECIDES TO ATTACK
        if (converted == "ATTACK" || converted == "A") {

            //First we have to calc damage
            calculateDamage(opponent);

            //Then we have to set damage to monster and user
            cout << '\n' << "Damage done to " << user.getName() << ": " << damageToUser;
            cout << '\n' << "Damage done to " << opponent.getName() << ": " << damageToOpponent;
            cout << '\n' << "Your Current Health is: " << user.getHealth() << " out of " << user.getMaxHealth();
            cout << '\n' << "Monster's current health is: " << opponent.getHealth() << " out of " << opponent.getMaxHealth() << '\n';
        }

        //What happens when we want to flee
        if (converted == "FLEE" || converted =="F"){
            cout << '\n' << '\n' << "You have fled." << '\n';
            break;
        }

        //What happens when you want to heal
        if (converted == "HEAL" || converted =="H"){
            int potions = getPots();
            if (potions > 0) {
                user.healCharacter();
                user.usePots();
                cout << '\n' << '\n' << "You have restored half of your hitpoints. \n You are now at " << user.getHealth() << " health out of " << user.getMaxHealth() << '\n';
            }

            //If you have no potions
            else {
                cout << "You reach for a potion, but find none, leaving yourself open to attack!\n";
            }

        }

        //What happens when health is at zero
        if (user.getHealth() <=0){
            cout << '\n' << "You have died" << '\n';
            exit(0);
        }

        if (opponent.getHealth() <= 0){
            cout << '\n' << "You have slain the monster!" << '\n';
            break;
        }


    }
}


//
//This function will reset users stats after dequiping a weapon
void combatRunner::resetUserStats1() {
    user.resetUserStats1();
}
void combatRunner::resetUserStats2() {
    user.resetUserStats2();
}
void combatRunner::resetUserStats3() {
    user.resetUserStats3();
}


//
//Function is defined as calculating damage based on information passed
void combatRunner::calculateDamage(Monsters &opponent){

    //Calculating the damage the user will do to the opponent
    //opponent Damage = damage done to the opponent
    double opponentDamage = (user.getAttack()*4 - opponent.getDefense()*2) + 1;
    if (opponentDamage < 3)
        opponentDamage = 2;

    double userDamage = (opponent.getAttack()*4 - user.getDefense()*2) + 1;
    if (userDamage < 4)
        userDamage = 3;

    //Statements below check to see if magical weapons are used
    //Magical weapons add a 10% increase to damage
    //Statements only happen if someone has a magical weapon and the other doesnt.
    if (user.getIfMagical() == true && opponent.getIsMonsterMagicResistant() == false)
    {
        opponentDamage += opponentDamage*0.1;
    }

    if (opponent.getIsMonsterMagical() == true && user.getIfMagical() == false)
    {
        userDamage+=userDamage*0.1;
    }

    this->damageToUser = userDamage;
    this->damageToOpponent = opponentDamage;

    //Checks to see in this is a boss that the user is fighting
    if (opponent.getIsBoss()) {
        if (rand()%100 < opponent.getCritModifier())
        {
            this->damageToOpponent = damageToOpponent + 0.2*damageToOpponent;
            cout << '\n' << '\n' << "The opponent has landed a critical hit!" << '\n' << '\n';
        }

    }

    setNewHealthValuesFromCombat(userDamage, opponentDamage, opponent);
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

void combatRunner::setNewHealthValuesFromCombat(double &userDamage, double &opponentDamage, Monsters &opponent) {
    opponent.setMonsterHealthAfterCombat(opponentDamage);
    user.setHealthAfterCombat(userDamage);
}

double combatRunner::findUserCurrentHealth() {
    return user.getHealth();
}

double combatRunner::findUserMaxHealth() {
    return user.getMaxHealth();
}

void combatRunner::buildInventory(){
    user.buildInventory();
}

int combatRunner::getPots(){
    user.getPots();
}
void combatRunner::addPots(int pots){
    user.addPots(pots);
}
void combatRunner::usePots(){
    user.usePots();
}
int combatRunner::getGoblinEar(){
    user.getGoblinEar();
}
void combatRunner::lootGoblinEar(){
    user.lootGoblinEar();
}
void combatRunner::lootBand(){
    user.lootBand();
}
int combatRunner::getBand(){
    user.getBand();
}
