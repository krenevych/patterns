#include "car.hpp"


Car::Car(Car::CarType type, Car::CarColor color,
Engine engine, Wheel wheel)
: type(type), color(color), engine(engine), wheel(wheel) {}

std::ostream& operator<<(std::ostream& os, Car const& car)
{
  os << "Car:\ntype=";

  switch (car.type)
  {
    case Car::CarType::Sedan:
      os << "Sedan";
      break;
    case Car::CarType::Hatchback:
      os << "Hatchback";
      break;
    case Car::CarType::SUV:
      os << "SUV";
      break;
  }

  os << ",\ncarColor=";

  switch (car.color)
  {
    case Car::CarColor::White:
      os << "White";
      break;
    case Car::CarColor::Black:
      os << "Black";
      break;
    case Car::CarColor::Red:
      os << "Red";
      break;
    case Car::CarColor::Grey:
      os << "Grey";
      break;
  }

  os << ",\nengine=" << car.engine
     << ",\nwheel=" << car.wheel;

  return os;
}
