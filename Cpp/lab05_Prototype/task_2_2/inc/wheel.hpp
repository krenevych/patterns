#pragma once
#include <string>
#include <iostream>

#include "cloneable.hpp"


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
  Wheel(Wheel const&);
  Wheel* clone() const;

  friend std::ostream& operator<<(std::ostream&, Wheel const&);

private:
  Material const material;
  int const diameter;
};
