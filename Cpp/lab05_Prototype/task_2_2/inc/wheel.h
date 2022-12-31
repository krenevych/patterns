#pragma once

#include <string>

#include "cloneable.h"


class Wheel: public Cloneable
{
public:
  enum class Material
  {
    Steel, //  стальний диск
    Alloy,  //  легкосплавний
    Forged  //  кований легкосплавний диск
  };

  Wheel(Material, int);
  Wheel(Wheel const*);
  ~Wheel();
  Wheel* clone() const override;
  std::string toString() const;

private:
    const Material material;
    const int diameter;
};
