#include <iostream>

#include "troll.hpp"


void Troll::pickUpWeapon()
{
  std::cout << "Pick up club" << std::endl;
}

void Troll::defenseAction()
{
  std::cout << "Defend with club" << std::endl;
}

void Troll::moveToSafety()
{
  std::cout << "Return to the mountain" << std::endl;
}

void Troll::defendAgainstAttack()
{
  this->pickUpWeapon();
  this->defenseAction();
  this->moveToSafety();
  std::cout << std::endl;
}
