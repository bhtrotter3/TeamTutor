#include "wand.h"
#include <iostream>

using namespace std;


void Wand::getWand(User_Character &user)
{
  user.setMagical (true);
  user.addHealth(30);
  user.addAttack(20);
  user.addDefense(20);
}


