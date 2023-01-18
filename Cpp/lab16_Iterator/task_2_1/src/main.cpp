#include <iostream>

#include "collection_integer.hpp"


int main()
{
  CollectionIntegers integers;
  integers.add(110);
  integers.add(312);
  integers.add(111);
  integers.add(813);
  integers.add(131);
  integers.add(140);

//  for (auto& integer: integers)
//  {
//    std::cout << integer << std::endl;
//  }

  return 0;
}
