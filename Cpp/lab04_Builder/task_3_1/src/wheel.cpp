#include "wheel.hpp"


Wheel::Wheel(Wheel::Material material, int diameter)
: material(material), diameter(diameter) {}

std::ostream& operator<<(std::ostream& os, Wheel const& wheel)
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
    case Wheel::Material::Forged:
      os << "Forged";
      break;
  }

  os << ", diameter=" << wheel.diameter << "}";

  return os;
}
