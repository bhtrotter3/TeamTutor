#include <iostream>
#include <string>

//Header Files Needed
#include "Villians/Monsters.h"
#include "Villians/Goblin.h"
#include "Villians/DarkElf.h"
#include "Villians/Orc.h"
#include "Villians/The_EX_Wife.h"
#include "Combat Handler/combatRunner.h"
#include "Heroes/User_Character.h"
#include <vector>

//Monsters Intialized
Goblin Gobby;
DarkElf Elfy;
Orc Orcy;
The_EX_Wife Audrey_Horrum;


/*Vector of all differentMonster
1 = GOBLIN
2 = Dark Elf
3 = Orc
4 = Ex Wife */
vector<Monsters> masterMonsterList;


/*Vector full of Bosses
1 = Ex Wife */
vector<Bosses> masterBossList;


//User's Character
User_Character Bill_Trotter;


int main() {

    //Monsters added to vector
    masterMonsterList.push_back(Gobby);
    masterMonsterList.push_back(Elfy);
    masterMonsterList.push_back(Orcy);
    //masterBossList.push_back(Audrey_Horrum);


    //Testing Message
    std::cout << "TESTING TESTING" << std::endl;



}