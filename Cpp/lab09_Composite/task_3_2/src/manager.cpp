#include <iostream>

#include "manager.hpp"


Manager::Manager(std::string const& name)
: name(name) {}

void Manager::payExpenses(int amount)
{
  std::cout << this->name << " has been paid $" << amount << std::endl;
}
