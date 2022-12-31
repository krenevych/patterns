#include "suv.h"


SUV::SUV(std::string mark, int power, int torque, bool isAWD)
: Car(mark, power, torque), isAWD(isAWD) {}

SUV::SUV(SUV const* other)
: Car(other), isAWD(this->isAWD) {}

SUV* SUV::clone() const
{
  return new SUV(this);
}

std::string SUV::toString() const
{
  return "SUV{" +
         this->Car::toString() +
         ", isAWD=" + (isAWD ? "true" : "false") +
         "}";
}
