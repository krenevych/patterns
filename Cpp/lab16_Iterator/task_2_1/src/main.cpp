#include <iostream>

#include "collection_integer.hpp"


int main()
{
  using namespace std;
  
  CollectionIntegers integers;
  integers.add(110);
  integers.add(312);
  integers.add(111);
  integers.add(813);
  integers.add(131);
  integers.add(140);

//  for (auto iter = integers.iterator(); iter.hasNext();)
//  {
//    cout << iter++ << endl;
//  }

  return 0;
}
