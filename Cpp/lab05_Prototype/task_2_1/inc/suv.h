#pragma once

#include "car.h"


class SUV: public Car
{
protected:
  const bool isAWD;

public:
  SUV(std::string, int, int, bool);
  SUV(SUV const*);
  SUV* clone() const override;
  std::string toString() const override;
};
