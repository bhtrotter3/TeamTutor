#include "Inventory.h"

using namespace std;

Inventory::Inventory(){}

//Instance of Inventory
Inventory& Inventory::getInstance() {
    static Inventory inventoryInstance;
    return inventoryInstance;
}

//Returns potions number
int Inventory::getPotions(){
   return potions;
}

//Using a potion will decrease the potion number
void Inventory::usePotion(){
    if (potions > 0) {
        potions -= 1;
    }
}

//Adding potions
void Inventory::addPotions(int pots){
    this->potions += pots;
}

//Getting the number of Goblin ears
int Inventory::getGoblinEar() {
    return goblinEar;
}

//Looting the goblin ears will decrease the amount of goblin ears
void Inventory::lootGoblinEar() {
    this->goblinEar += 1;
}

//For ORC Quest, the wedding band item
void Inventory::lootBand(){
    this->ogreWeddingBand +=1;
}

//Tells wether or not the band is there
int Inventory::getBand(){
    int band = this->ogreWeddingBand;
    return band;
}