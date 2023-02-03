#include "suv.hpp"


SUV::SUV(std::string const& mark, int power, int torque, bool isAWD)
: Car(mark, power, torque), isAWD(isAWD) {}

SUV::SUV(SUV const& other)
: Car(other), isAWD(other.isAWD) {}

SUV* SUV::clone() const
{
  return new SUV(*this);
}

std::ostream& operator<<(std::ostream& os, SUV const& suv)
{
  os << "SUV{"
     << static_cast<Car const&>(suv)
     << ", isAWD=" << (suv.isAWD ? "true" : "false")
     << "}";

  return os;
}
