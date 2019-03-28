//
// Created by willi on 3/27/2019.
// This is a BASE class for all locations

#ifndef TEAMTUTOR_LOCATION_H
#define TEAMTUTOR_LOCATION_H

#include <string>

using namespace std;

class Location {

protected:
    string name;
    int uniqueID;
    char gridLocation[7][7];
public:
    Location();
    Location(string n, int ui);

};


#endif //TEAMTUTOR_LOCATION_H
