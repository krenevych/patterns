#pragma once
#include <vector>
#include <algorithm>


template<class Collection>
class IntegerIterator
{
public:
  IntegerIterator(Collection const& collection)
  : collectionIntegers(collection.getArray()), index(0)
  {
    std::sort(this->collectionIntegers.begin(), this->collectionIntegers.end());
  }

  bool hasNext() const
  {
    return this->index < this->collectionIntegers.size();
  }

  int next()
  {
    return this->collectionIntegers.at((this->index)++);
  }

  int operator++(int)
  {
    return this->next();
  }

private:
  std::vector<int> collectionIntegers;
  size_t index;
};
