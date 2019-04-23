#include "wand.h"
#include <iostream>

using namespace std;


void Wand::getWand(User_Character &user)
{
  user.setMagical (true);
  user.addHealth(0.2*user.getMaxHealth());
  user.addAttack(20);
  user.addDefense(20);
}

