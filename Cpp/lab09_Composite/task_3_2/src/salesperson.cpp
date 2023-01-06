#include "salesperson.h"

#include <iostream>


Salesperson::Salesperson(std::string const& name, Manager* manager)
: name(name), manager(manager) {}

Salesperson::~Salesperson() {}

void Salesperson::payExpenses(int amount)
{
  std::cout << this->name << " has been paid $" << amount << std::endl;
}
