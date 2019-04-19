//
// Created by whtrotter on 4/10/2019.
//

#include "Maps.h"

using namespace std;

Maps::Maps()
        : Control(){srand(time(NULL));} //seed random encounter roll

bool Maps::randomEncounter(int rate) {
    if (rand() % 100 < rate){
        fightTime = true;
    }
    else {
        fightTime = false;
    }
    return fightTime;
    //rand() rolls a number between 32768, then modulos it by 100, leaving a number between 0 and 99
    // if that number is lower than rate, fightTime activates
    //this results in -almost- a rate% chance of encounter.
    //Since 32768 isn't a factor of 100, there 68 numbers that only modulo between 0 and 67
    // but it's error rate is 0.3% according to some hasty math, so a 65 rate would be a ~65.2% encounter
}

void Maps::worldMap() {
    initializeMap(); // remove any tiles that might be added from a previous map
    //buildMap(); //needed for proper starting location on transition
    combatRunner1=&combatRunner1->getInstance();
    map[3][3] = 'T'; //town
    if (questOne){
        map[7][3] = 'G';
    }
    printMap(); //show player the starting map
    if (isHero){
        cout << "Easy peasy lemon squeezy. Now to bring the Chieftain's head back to town.\n";
    }
    else if (questOne) {
        cout << "Kill some goblins to win the peoples trust. Kinda cliche, but at least is isn't rats.\n";
    }
    else{
        std::cout << "You see a town just over the next hill.\n";
    }
    while (true) { //movement loops until you interact with something to update what's going on

        if (playerx == 3 && playery == 3 && interact) {
            interact = false;
            playerx = 7; //town starting location from world map
            playery = 9;
            Maps::townA(); //map switch
        }
        if (playerx == 7 && playery == 3 && interact) {
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
    map[19][9] = 'B'; //Blacksmith
    for (int x = 0; x < 21; x ++){
        map[x][8] = '=';
    }
    map[15][5] = 'S'; //Shop
    map[7][9] = 'E'; //Entrance
    buildMap(); //get player position right after adding walls
    printMap(); //show player the new map
    std::cout << "Finally. Back among civilization.\n";
    while (true) {
        if (playerx == 7 && playery == 9 && interact) {
            interact = false;
            playerx = 3; //worldmap starting location
            playery = 3;
            Maps::worldMap();
        }
        else if (playerx == 15 && playery ==5 && interact){
            interact == false;
            cout << " CONGRATULATIONS!! YOU GOT YOUR LUNCH! \n";
            cout << R"(
                                                          //
                                                         //
                                         _______________//__
                                       .(______________//___).
                                       |              /      |
                                       |. . . . . . . / . . .|
                                       \ . . . . . ./. . . . /
                                        |           / ___   |
                    _.---._             |::......./../...\.:|
                _.-~       ~-._         |::::/::\::/:\::::::|
            _.-~               ~-._     |::::\::/::::::X:/::|
        _.-~                       ~---.;:::::::/::\::/:::::|
    _.-~                                 ~\::::::n::::::::::|
 .-~                                    _.;::/::::a::::::::/
 :-._                               _.-~ ./::::::::d:::::::|
 `-._~-._                   _..__.-~ _.-~|::/::::::::::::::|
  /  ~-._~-._              / .__..--~----.YWWWWWWWWWWWWWWWP'
 \_____(_;-._\.        _.-~_/       ~).. . \
    /(_____  \`--...--~_.-~______..-+_______)
  .(_________/`--...--~/    _/           /\
 /-._     \_     (___./_..-~__.....__..-~./
 `-._~-._   ~\--------~  .-~_..__.-~ _.-~
     ~-._~-._ ~---------'  / .__..--~
         ~-._\.        _.-~_/
             \`--...--~_.-~
              `--...--~
            )";
            exit(0);

        }
        else if (playerx == 19 && playery ==9 && interact){
            interact = false;
            if (isHero && combatRunner1->getGoblinEar() >= 3){
                map[19][8] = ' ';
                printMap();
                cout << "I knew I could count on you. Maybe because the rest of us can't move. Get in there.\n";
            }
            else{
                cout
                        << "Blacksmith: \"You there! You look like a nice young main character. There be goblins in a cave\n"
                           "east of here. Take care of them and we'll let you in\"\n"
                           << "You might need these.\n"
                           << "You got 10 potions! How are you going to carry all of these?\n";
                questOne = true;
                combatRunner1->addPots(10);
            }

        }
        else {
            moveTile();
        }
    }
}

void Maps::goblinCave() { //map transition
    initializeMap();
    bool goblinFight= false;

    for (int x=0; x < 21; x++){
        map[x][2] = '=';
        map[x][6] = '=';
        map[x][8]='=';
    }
    map[5][2] = ' ';
    map[5][6] = ' ';
    map[5][8] = ' ';
    for (int y=3; y < 11; y++){
        map [4][y] = '|';
        map[6][y] = '|';
    }
    map [4][7] = ' ';
    map [6][7] = ' ';

    map[1][1] = 'O'; //treasure
    map [1][7] = 'O'; // treasure
    map[5][9] = 'O'; //treasure
    map[19][7] = 'B'; //Goblin Boss
    map[19][1] = 'E'; //Entrance
    buildMap(); //update map tiles

    printMap(); //show player the new map
    std::cout << "God it smells in here. Why don't I just tell the Blacksmith I killed them? How would he know? Oh.\n"
                 "Crap. He's going to want proof. Ew.\n";
    while (true) {
        if (playerx == 19 && playery == 1 && interact) {
            interact = false;
            playerx = 7; //worldmap starting location from cave
            playery = 3;
            Maps::worldMap();
        }
        else if (playerx == 1 && playery ==1 && interact) {//treasure
            map[1][1] = ' ';
            printMap();
        }
        else if (playerx == 1 && playery ==7 && interact) {//treasure
            map[1][7] = ' ';
            printMap();
        }
        else if (playerx == 5 && playery ==9 && interact) {//treasure
            map[5][9] = ' ';
            printMap();
        }
        else if (playerx == 19 && playery ==7 && interact){
            map[19][7] = ' ';
            cout << "Goblin Chieftain: \"You may have butchered my boys, but I'm slightly bigger! Have at you!\" \n";
            //Goblin Boss fight
            printMap();
            cout << "All I wanted was some lunch. Now I'm cutting the head off of some ugly monster that smells\n"
                    << "like a sewer. I should've stayed in school, like mama wanted.\n";
            isHero = true;
        }
            moveTile();
            if (combatRunner1->getGoblinEar() < 3) {
                goblinFight = randomEncounter(20);
            }
            else if (combatRunner1->getGoblinEar() >= 3){
                goblinFight= false;
                cout << "I think that's all the small fries\n";
            }
            if (goblinFight){
                cout << '\n';
                Goblin Gobby;

                cout << "User health: " << combatRunner1->findUserCurrentHealth() << endl;
                cout << "Monster Health: " << Gobby.getHealth() << endl;

                cout << '\n' << '\n' << "Combat!" << '\n' << '\n';

                combatRunner1->combat(Gobby);
                if (Gobby.getHealth() <= 0){
                    combatRunner1->lootGoblinEar();
                    cout << "Needs me a trophy of come kind. \nGOBLIN EAR +1!!\n";
                }
                printMap();




            }

    }
}