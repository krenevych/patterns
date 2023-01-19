#pragma once
#include <vector>
#include <iostream>

#include "integer_iterator.hpp"


class CollectionIntegers
{
public:
  void add(int);
  size_t size() const;
  int at(size_t) const;
  std::vector<int> const& getArray() const;
  IntegerIterator<CollectionIntegers> iterator() const;

  friend std::ostream& operator<<(std::ostream&, CollectionIntegers const&);

private:
  std::vector<int> array;
};
