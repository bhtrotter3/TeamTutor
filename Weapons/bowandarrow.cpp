
#include "bowandnarrow.h"
#include <iostream>

using namespace std;

void BowAndArrow::getBowAndArrow(User_Character &user)
{
  user.setMagical (false);
  user.addHealth(10);
  user.addAttack(1);
  user.addDefense(1);

}
