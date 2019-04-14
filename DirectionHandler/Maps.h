//
// Created by whtrotter on 4/10/2019.
//

#ifndef UNTITLED_MAPS_H
#define UNTITLED_MAPS_H
#include "Control.h"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

class Maps: public Control { //inherits the basic movement functions, but lets me keep map data separate
                                //could maybe be one class, or possibly pass the variable around, but this seemed
                                //more efficient
protected:
    bool questOne = false;


public:
    Maps ();
    void worldMap();
    void townA();
    void goblinCave();
    void randomEncounter(int rate);

};


#endif //UNTITLED_MAPS_H
