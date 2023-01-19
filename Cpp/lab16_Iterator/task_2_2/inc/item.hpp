#pragma once
#include <string>


class Item
{
public:
  Item(std::string const&, int);
  std::string getName() const;
  int getQuantity() const;

private:
  std::string name;
  int quantity;
};
