//
// Created by willi on 3/27/2019.
//

#include "Town.h"

using namespace std;

Town::Town()
    :Location()
{
    gridLocation[3][3] = 'm';
    gridLocation[3][4] = 'h';

    name="Town";
    uniqueID=0001;

}