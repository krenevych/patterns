#pragma once
#include <string>

#include "manager.hpp"


class Salesperson
{
public:
  Salesperson(std::string const&, Manager*);
  void payExpenses(int);

private:
  std::string const name;
  Manager* manager;
};
