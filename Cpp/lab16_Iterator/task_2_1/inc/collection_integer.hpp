#pragma once
#include <vector>
#include <iostream>


class CollectionIntegers
{
public:
  void add(int);
  size_t size() const;
  int get(size_t) const;
  std::vector<int>* getArray();

  friend std::ostream& operator<<(std::ostream&, CollectionIntegers const&);

private:
  std::vector<int> array;
};
