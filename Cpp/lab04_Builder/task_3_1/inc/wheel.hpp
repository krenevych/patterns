#pragma once
#include <string>
#include <iostream>


class Wheel
{
public:
  enum class Material
  {
    Steel, //  стальний диск
    Alloy,  //  легкосплавний
    Forged  //  кований легкосплавний диск
  };

  Wheel(Material, int);

  friend std::ostream& operator<<(std::ostream&, Wheel const&);

private:
    Material const material;
    int const diameter;
};
