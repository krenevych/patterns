#include "wheel.hpp"


Wheel::Wheel(int diameter)
: diameter(diameter), material(Wheel::Material::Steel) {}

std::ostream &operator<<(std::ostream& os, Wheel const& wheel)
{
  os << "Wheel{material=";

  switch (wheel.material)
  {
    case Wheel::Material::Steel:
      os << "Steel";
      break;
    case Wheel::Material::Alloy:
      os << "Alloy";
      break;
  }

  os << ", diameter=" << wheel.diameter << "}";

  return os;
}
