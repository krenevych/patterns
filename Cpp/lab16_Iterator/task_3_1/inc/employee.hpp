#pragma once
#include <string>


class Employee
{
public:
  Employee(std::string const&);
  std::string getName() const;

private:
  std::string name;
};
