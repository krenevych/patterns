#include "wheel.h"


Wheel::Wheel(Wheel::Material material, int diameter)
: material(material), diameter(diameter) {}

Wheel::Wheel(Wheel const* other)
: material(other->material), diameter(other->diameter) {}

Wheel::~Wheel() {}

Wheel* Wheel::clone() const
{
  return new Wheel(this);
}

std::string Wheel::toString() const
{
  std::string result = "Wheel{material=";

  switch (this->material)
  {
    case Wheel::Material::Steel:
      result += "Steel";
      break;
    case Wheel::Material::Alloy:
      result += "Alloy";
      break;
    case Wheel::Material::Forged:
      result += "Forged";
      break;
  }

  result += ", diameter=" + std::to_string(diameter) + "}";

  return  result;
}
