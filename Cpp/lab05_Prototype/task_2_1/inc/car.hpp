#pragma once
#include <string>
#include <iostream>

#include "cloneable.hpp"


class Car: public Cloneable
{
protected:
  std::string const mark;
  int const power;
  int const torque;

public:
  Car(std::string const&, int, int);
  Car(Car const&);
  virtual Car* clone() const;

  friend std::ostream& operator<<(std::ostream& os, Car const&);
};
