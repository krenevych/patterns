#include "car.h"


Car::Car(std::string mark, int power, int torque)
: mark(mark), power(power), torque(torque) {}

Car::Car(Car const* other)
: mark(other->mark), power(other->power), torque(other->torque) {}

Car::~Car() {}

Car* Car::clone() const
{
  return new Car(this);
}

std::string Car::toString() const
{
  return "Car{mark=" + this->mark +
          ", power=" + std::to_string(this->power) +
          ", torque=" + std::to_string(this->torque) +
          '}';
}
