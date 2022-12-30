#include "car.h"


Car::Car(Car::CarType type, Car::CarColor color,
Engine engine, Wheel wheel)
: type(type), color(color), engine(engine), wheel(wheel) {}

Car::~Car() {}

std::string Car::toString() const
{
  std::string result = "Car:\ntype=";

  switch (this->type)
  {
    case Car::CarType::Sedan:
      result += "Sedan";
      break;
    case Car::CarType::Hatchback:
      result += "Hatchback";
      break;
    case Car::CarType::SUV:
      result += "SUV";
      break;
  }

  result += ",\ncarColor=";

  switch (this->color)
  {
    case Car::CarColor::White:
      result += "White";
      break;
    case Car::CarColor::Black:
      result += "Black";
      break;
    case Car::CarColor::Red:
      result += "Red";
      break;
    case Car::CarColor::Grey:
      result += "Grey";
      break;
  }

  result += ",\nengine=" + (this->engine.toString()) +
            ",\nwheel=" + (this->wheel.toString());

  return result;
}
