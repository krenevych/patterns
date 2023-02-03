#pragma once
#include "car.hpp"


class SUV: public Car
{
protected:
  bool const isAWD;

public:
  SUV(std::string const&, int, int, bool);
  SUV(SUV const&);
  SUV* clone() const override;

  friend std::ostream& operator<<(std::ostream&, SUV const&);
};
