//
// Created by willi on 4/17/2019.
//

#include "Inventory.h"
using namespace std;

Inventory::Inventory(){}

int Inventory::getPotions(){
   return potions;
}

void Inventory::usePotion(){
    if (potions > 0) {
        potions -= 1;
    }
}
void Inventory::addPotions(int pots){
    potions += pots;
}