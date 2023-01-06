#pragma once

#include <string>

#include "manager.h"


class Salesperson
{
public:
  Salesperson(std::string const&, Manager*);
  ~Salesperson();
  void payExpenses(int);

private:
  std::string const name;
  Manager* manager;
};
