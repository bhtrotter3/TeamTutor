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
#include "DirectionHandler/Maps.h"
#include <vector>
// I'd like to go on record and say making me the main character was not my idea

//Monsters Intialized
Goblin Gobby;
DarkElf Elfy;
Orc Orcy;
The_EX_Wife Goblin_King;


/*Vector of all differentMonster
1 = GOBLIN
2 = Dark Elf
3 = Orc
4 = Ex Wife */
vector<Monsters> masterMonsterList;


/*Vector full of Bosses
1 = Ex Wife */
//vector<Bosses> masterBossList;


//User's Character
User_Character Bill_Trotter;


int main() {

    //Monsters added to vector
    //See 2 note sections above for vector mapping
    masterMonsterList.push_back(Gobby);
    masterMonsterList.push_back(Elfy);
    masterMonsterList.push_back(Orcy);
    masterMonsterList.push_back(Goblin_King);


    //ALL CODE BELOW IS TESTING, DO NOT REMOVE, PLEASE COMMENT OUT IF NEED

    //cout << "User health: " << Bill_Trotter.getHealth() << endl;
    //cout << "Monster Health: " << Gobby.getHealth() << endl;

    //cout << '\n' << '\n' << "Combat!" << '\n' << '\n';
    //combatHandler.combat(Gobby, Bill_Trotter);

    //cout << "User health: " << Bill_Trotter.getHealth() << endl;
    //cout << "Monster Health: " << Gobby.getHealth() << endl;


    //Starts up user control and map display
    Maps maps;
    maps.initializeMap();
    maps.worldMap();



}