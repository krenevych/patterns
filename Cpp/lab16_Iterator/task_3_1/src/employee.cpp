#include "employee.hpp"


Employee::Employee(std::string const& name)
: name(name) {}

std::string Employee::getName() const
{
  return this->name;
}
