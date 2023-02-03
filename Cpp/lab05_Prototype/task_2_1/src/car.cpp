#include "car.hpp"


Car::Car(std::string const& mark, int power, int torque)
: mark(mark), power(power), torque(torque) {}

Car::Car(Car const& other)
: mark(other.mark), power(other.power), torque(other.torque) {}

Car* Car::clone() const
{
  return new Car(*this);
}

std::ostream& operator<<(std::ostream& os, Car const& car)
{
  os << "Car{mark=" << car.mark
     << ", power=" << car.power
     << ", torque=" << car.torque
     << "}";

  return os;
}
