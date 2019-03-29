//
// Created by willi on 3/27/2019.
//

#ifndef TEAMTUTOR_TOWN_H
#define TEAMTUTOR_TOWN_H
//test

#include <string>
#include "Location.h"

class Town: public Location {

private:

public:
    //Since our town is customally designed, we need to statically define it
    Town(){
    gridLocation[3][3] = 'm';
    gridLocation[3][4] = 'h';

};



};


#endif //TEAMTUTOR_TOWN_H
