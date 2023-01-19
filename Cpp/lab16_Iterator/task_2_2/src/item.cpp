#include "item.hpp"


Item::Item(std::string const& name, int quantity)
: name(name), quantity(quantity) {}

std::string Item::getName() const
{
  return this->name;
}

int Item::getQuantity() const
{
  return this->quantity;
}
