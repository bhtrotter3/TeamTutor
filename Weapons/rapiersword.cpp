#include "rapiersword.h"


using namespace std;

void RapierSword::getRapierSword(User_Character &user)
{
  user.setMagical (false);
  user.addHealth(15);
  user.addAttack(2);
  user.addDefense(1);
}

