//
// Created by whtrotter on 4/10/2019.
//

#include "Control.h"


using namespace std;

Control::Control(){};

void Control::printMap(){ //prints current map
    for (int y=0; y<11;y++) {
        for (int x = 0; x < 21; x++) { //Clion wants a range based for loop here, but I dunno if that'll actually work
            cout << map[x][y];                  // for iterating an MDA
        }
        cout << endl;
    }
}
void Control::buildMap() { //builds non-interactive map tiles, used for movement
    for (int y = 0; y < 11; y++) {
        for (int x = 0; x < 21; x++) {
            if ((y % 2 == 0 && x % 2 == 0) || y == 0 || y == 10) { //turns old player position back into walls
                map[x][y] = '=';
            }
            if (x == 0 || x == 20) {
                map[x][y] = '|';
            }

        }
        map[playerx - 1][playery - 1] = 'O';  //and updates player location in grid
        map[playerx - 1][playery + 1] = 'O';
        map[playerx + 1][playery - 1] = 'O';
        map[playerx + 1][playery + 1] = 'O';
    }
}

/*void Control::clearMap (){ //clears interactive tiles (for map change)
    for (int y=0; y<11;y++){
        for (int x = 1; x < 21; x++){
            if (x % 2 ==1 && y % 2 == 1)
                map[x][y] = ' ';
        }
    }

}
*/
void Control::moveTile(){ //updates player position by user input
    interact = false; //reset interact on movement

    cout << "w = North, a = West, s = South, d = East, e = Interact\n";
    try {
        cin >> move; //user movement input
    }
    catch(...){
        cout << "Bad MOVE input";
    }

    //move = tolower(move); Not really worth the potential errors

    if (move == 'a'&& map[playerx-1][playery] != '|') { // if blocks keep you from walking through walls
        playerx -= 2;
    }
    else if (move == 'd' && map[playerx+1][playery] != '|') {
        playerx += 2;
    }
    else if (move == 'w'&& map[playerx][playery-1] != '=') {
        playery -= 2;
    }
    else if (move == 's' && map[playerx][playery+1] != '=') {
        playery += 2;
    }
    else if (move == 'e'){
        interact =true; // "Use" a tile on the map
    }
    buildMap();
    printMap();
    //std::cout << 'x'<< playerx <<'y' << playery << endl;
}



void Control::initializeMap() { //build empty map to initialize all index, used for map transition
    for (int y = 0; y < 11; y++) {
        for (int x = 0; x < 21; x++) {
            if ((x % 2 == 0 && y % 2 == 0) || y == 0 || y == 10) {
                map[x][y] = '=';
            }
            else if (x == 0 || x == 20) {
                map[x][y] = '|';
            }
            else {
                map[x][y] = ' ';
            }

        }
    }
    map[playerx - 1][playery - 1] = 'O';  // player location in grid
    map[playerx - 1][playery + 1] = 'O';
    map[playerx + 1][playery - 1] = 'O';
    map[playerx + 1][playery + 1] = 'O';
}

