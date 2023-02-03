#include <iostream>

#include "salesperson.hpp"


Salesperson::Salesperson(std::string const& name, Manager* manager)
: name(name), manager(manager) {}

void Salesperson::payExpenses(int amount)
{
  std::cout << this->name << " has been paid $" << amount << std::endl;
}
