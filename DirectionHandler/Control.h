//
// Created by whtrotter on 4/10/2019.
//

#ifndef UNTITLED_CONTROL_H
#define UNTITLED_CONTROL_H
#include <iostream>

class Control {
protected:
    int playerx=1;
    int playery=1;
    bool interact=false;
    char map [21][11];
    char move = '0';

public:
    Control ();
    void printMap();
    void buildMap();
    //void clearMap (); almost always better to just initialize it again
    void moveTile();
    void initializeMap();

};


#endif //UNTITLED_CONTROL_H
