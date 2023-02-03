#include "employee.hpp"


Employee::Employee(std::string const& name)
: name(name) {}

std::string const& Employee::getName() const
{
  return this->name;
}
