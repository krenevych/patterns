#include <iostream>

#include "pirate.hpp"


void Pirate::pickUpWeapon()
{
  std::cout << "Pick up sword" << std::endl;
}

void Pirate::defenseAction()
{
  std::cout << "Defend with sword" << std::endl;
}

void Pirate::moveToSafety()
{
  std::cout << "Return to the ship" << std::endl;
}

void Pirate::defendAgainstAttack()
{
  this->pickUpWeapon();
  this->defenseAction();
  this->moveToSafety();
  std::cout << std::endl;
}
