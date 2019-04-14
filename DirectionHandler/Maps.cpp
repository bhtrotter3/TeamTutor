//
// Created by whtrotter on 4/10/2019.
//

#include "Maps.h"

using namespace std;

Maps::Maps()
        : Control(){srand(time(NULL));} //seed random encounter roll

void Maps::randomEncounter(int rate) {
    if (rate != 0) { //No dividing by zero please.
        int fightTime = (rand() % rate); //rate 1 = 100% chance rate 2 = 50% rate x = 1/x chance
        if (fightTime == 0) {                      // call multiple times for higher encounter rates 50%*2 = 75% chance
            cout << "put fight function here\n";    //so calling rate 2 twice = 75% encounter rate
        }                                           //(with chance of back to back fights)
    }
}

void Maps::worldMap() {
    initializeMap(); // remove any tiles that might be added from a previous map
    //buildMap(); //needed for proper starting location on transition
    map[3][3] = 'T'; //town
    if (questOne){
        map[7][7] = 'G';
    }
    printMap(); //show player the starting map
    std::cout<< "You see a town just over the next hill.\n";
    while (true) { //movement loops until you interact with something to update what's going on

        if (playerx == 3 && playery == 3 && interact) {
            interact = false;
            playerx = 7; //town starting location from world map
            playery = 9;
            Maps::townA(); //map switch
        }
        if (playerx == 7 && playery == 7 && interact) {
            interact = false;
            playerx = 19; //town starting location from world map
            playery = 1;
            Maps::goblinCave(); //map switch
        }
        else {
            moveTile();
        }

    }
}

void Maps::townA() { //map transtion
    initializeMap();
    //buildMap(); //update map tiles
    map[19][9] = 'B'; //Blacksmith
    for (int x = 0; x < 21; x ++){
        map[x][8] = '=';
    }
    //map[19][8] = ' '; //railroading the player into an NPC
    map[15][5] = 'S'; //Shop
    map[7][9] = 'E'; //Entrance
    printMap(); //show player the new map
    std::cout << "Finally. Back among civilization.\n";
    while (true) {
        if (playerx == 7 && playery == 9 && interact) {
            interact = false;
            playerx = 3; //worldmap starting location
            playery = 3;
            Maps::worldMap();
        }
        else if (playerx == 19 && playery ==9 && interact){
            interact = false;
            cout<< "Blacksmith: \"You there! You look like a nice young main character. There be goblins in a cave\n"
                   "east of here. Take care of them and we'll let you in\"\n";
            questOne = true;

        }
        else {
            moveTile();
        }
    }
}

void Maps::goblinCave() { //map transtion
    initializeMap();
    buildMap(); //update map tiles
    //map[19][9] = 'B'; //Blacksmith
    //for (int x = 0; x < 21; x ++){
    //    map[x][8] = '=';
    //}
    //map[19][8] = ' '; //railroading the player into an NPC
    //map[15][5] = 'S'; //Shop
    //map[7][9] = 'E'; //Entrance
    printMap(); //show player the new map
    std::cout << "God it smells in here. Why don't I just tell the Blacksmith I killed them? How would he know? Oh.\n"
                 "Crap. He's going to want proof. Ew.\n";
    while (true) {
        if (playerx == 19 && playery == 1 && interact) {
            interact = false;
            playerx = 7; //worldmap starting location
            playery = 7;
            Maps::worldMap();
        }
            //else if (playerx == 19 && playery ==9 && interact){
            //cout<< "Blacksmith: \"You there! You look like a nice young main character. There be goblins in a cave\n"
            //  "east of here. Take care of them and we'll let you in";
            //questOne = true;

            // }
        else {
            moveTile();
            randomEncounter(2);
            randomEncounter(5); //overall 60% chance of encounter (complement of both failing, (1/2)(4/5)
                                // 10% chance of a double encounter, 40% chance of no encounter on move.

        }
    }
}