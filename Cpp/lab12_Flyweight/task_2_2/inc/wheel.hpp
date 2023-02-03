#pragma once
#include <iostream>


class Wheel
{
public:
  enum class Material
  {
    Steel,  //  стальний диск
    Alloy,  //  легкосплавний
  };

  Wheel(int);

  friend std::ostream& operator<<(std::ostream&, Wheel const&);

private:
    Material const material;
    int const diameter;
};
