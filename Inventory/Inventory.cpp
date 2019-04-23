//
// Created by willi on 4/17/2019.
//

#include "Inventory.h"
using namespace std;

Inventory::Inventory(){}


Inventory& Inventory::getInstance() {
    static Inventory inventoryInstance;
    return inventoryInstance;
}

int Inventory::getPotions(){
   return potions;
}

void Inventory::usePotion(){
    if (potions > 0) {
        potions -= 1;
    }
}
void Inventory::addPotions(int pots){
    this->potions += pots;
}

int Inventory::getGoblinEar() {
    return goblinEar;
}
void Inventory::lootGoblinEar() {
    this->goblinEar += 1;
}
void Inventory::lootBand(){
    this->ogreWeddingBand +=1;
}
int Inventory::getBand(){
    int band = this->ogreWeddingBand;
    return band;
}

void Inventory::getWand(User_Character &user)
{
    Wand::getWand(user);
}

void Inventory::getRapierSword(User_Character &user)
{
    RapierSword::getRapierSword(user);
}

void Inventory::getBowNArrow(User_Character &user)
{
    BowNArrow::getBowNArrow(user);
}
