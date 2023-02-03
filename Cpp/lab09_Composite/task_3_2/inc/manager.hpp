#pragma once
#include <string>


class Manager
{
public:
  Manager(std::string const&);
  void payExpenses(int);

private:
  std::string const name;
};
