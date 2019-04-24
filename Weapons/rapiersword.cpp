#include "rapiersword.h"


using namespace std;

//Stats of a Raiper Sword
void RapierSword::getRapierSword(User_Character &user)
{
  user.setMagical (false);
  user.addHealth(15);
  user.addAttack(10);
  user.addDefense(10);
}

