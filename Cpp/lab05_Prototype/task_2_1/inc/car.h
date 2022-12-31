#pragma once

#include "cloneable.h"

#include <string>


class Car: public Cloneable
{
protected:
  const std::string mark;
  const int power;
  const int torque;

public:
  Car(std::string, int, int);
  Car(Car const*);
  ~Car();
  virtual Car* clone() const override;
  virtual std::string toString() const;
};
