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

  explicit Wheel(int);
  ~Wheel();

  friend std::ostream& operator<<(std::ostream&, Wheel const&);

private:
    Material const material;
    int const diameter;
};
