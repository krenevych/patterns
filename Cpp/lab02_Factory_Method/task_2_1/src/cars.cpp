#include <iostream>

#include "cars.hpp"


Audi::Audi() {}

void Audi::run()
{
  std::cout << "run: Audi" << std::endl;
}


Ford::Ford() {}

void Ford::run()
{
  std::cout << "run: Ford" << std::endl;
}


Mazda::Mazda() {}

void Mazda::run()
{
  std::cout << "run: Mazda" << std::endl;
}


Toyota::Toyota() {}

void Toyota::run()
{
  std::cout << "run: Toyota" << std::endl;
}


VW::VW() {}

void VW::run()
{
  std::cout << "run: VW" << std::endl;
}
