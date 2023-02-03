#pragma once
#include <vector>


class CollectionIntegers;

class IntegerIterator
{
public:
  IntegerIterator(CollectionIntegers const*);
  bool hasNext() const;
  int next();
  int operator++(int);

private:
  std::vector<int> collectionIntegers;
  size_t index;
};
