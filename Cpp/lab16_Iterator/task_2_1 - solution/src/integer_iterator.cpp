#include <algorithm>

#include "integer_iterator.hpp"
#include "collection_integer.hpp"


IntegerIterator::IntegerIterator(CollectionIntegers const* collection)
: collectionIntegers(collection->getArray()), index(0)
{
  std::sort(this->collectionIntegers.begin(), this->collectionIntegers.end());
}

bool IntegerIterator::hasNext() const
{
  return this->index < this->collectionIntegers.size();
}

int IntegerIterator::next()
{
  return this->collectionIntegers.at((this->index)++);
}

int IntegerIterator::operator++(int)
{
  return this->next();
}
