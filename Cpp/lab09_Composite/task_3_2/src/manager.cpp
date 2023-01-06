#include "manager.h"

#include <iostream>


Manager::Manager(std::string const& name)
: name(name) {}

Manager::~Manager() {}

void Manager::payExpenses(int amount)
{
  std::cout << this->name << " has been paid $" << amount << std::endl;
}
