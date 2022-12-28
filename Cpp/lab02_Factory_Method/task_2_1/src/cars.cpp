#include "cars.h"

#include <iostream>


Car::Car() {}
Car::~Car() {}


Audi::Audi() : Car() {}
Audi::~Audi() {}
void Audi::run()
{
  std::cout << "run: Audi" << std::endl;
}


Ford::Ford() : Car() {}
Ford::~Ford() {}
void Ford::run()
{
  std::cout << "run: Ford" << std::endl;
}


Mazda::Mazda() : Car() {}
Mazda::~Mazda() {}
void Mazda::run()
{
  std::cout << "run: Mazda" << std::endl;
}


Toyota::Toyota() : Car() {}
Toyota::~Toyota() {}
void Toyota::run()
{
  std::cout << "run: Toyota" << std::endl;
}


VW::VW() : Car() {}
VW::~VW() {}
void VW::run()
{
  std::cout << "run: VW" << std::endl;
}
