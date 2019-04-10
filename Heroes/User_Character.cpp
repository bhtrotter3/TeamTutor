//
// Created by willi on 4/3/2019.
//

#include "User_Character.h"
#include <iostream>

using namespace std;

//Adds value to user attack
void User_Character::addAttack(int x){
    currentAttack+=x;
}

//Reset user attack
void User_Character::resetAttack(){
    currentAttack = naturalAttack;
}

//Adds modifer to current Defense
void User_Character::addDefense(int x){
    currentDefense+=x;
}

//Resets user defense
void User_Character::resetDefense(){
    currentDefense = naturalDefense;
}

//Adds to weapon modifer
void User_Character::addWeaponModifer(int x){
    weaponModifer+=x;
}

//Resets Weapons Modifer
void User_Character::resetWeaponModifer() {
    weaponModifer = 0;
}

//Ups crit modifer
void User_Character::addCritModifer(int x){
    critModifer+=x;
}

//Reset crit modifer
void User_Character::resetCritModifer(){
    critModifer = 1;
}

//Adds health to user, user can never go over max health
void User_Character::addHealth(int x) {
    currentHealth += x;
    if (currentHealth >= maxHealth)
        currentHealth = maxHealth;
        cout << '\n' << "You are at max health";
}

//Adds health to user, user can never go over max health
void User_Character::minusHealth(int x) {
    currentHealth -= x;
    if (currentHealth <= 0){
        cout << '\n' << '\n' << "Your Health has fallen to ZERO...You are Dead." << '\n';
    }
}

//Adds x to max health
void User_Character::addMaxHealth(int x) {
    maxHealth+=x;
}

int User_Character::getAttack() {
    return currentAttack;
}

int User_Character::getDefense() {
    return currentDefense;
}

bool User_Character::getIfMagical() {
    return isMagical;
}

string User_Character::getName() {
    return name;
}