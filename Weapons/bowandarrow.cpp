#include "bowandnarrow.h"
#include <iostream>

#include "../Heroes/User_Character.h"

using namespace std;

void BowAndArrow::getBowAndArrow(User_Character &user)
{
  user.setMagical (false);
  user.addHealth(10);
  user.addAttack(2);
  user.addDefense(2);

}

