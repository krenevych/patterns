#pragma once

#include <string>


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
  ~Wheel();
  std::string toString() const;
  
private:
    const Material material;
    const int diameter;
};
