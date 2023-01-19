#include "collection_integer.hpp"

#include <boost/algorithm/string.hpp>
#include <boost/range/adaptor/transformed.hpp>


void CollectionIntegers::add(int i)
{
  this->array.push_back(i);
}

size_t CollectionIntegers::size() const
{
  return this->array.size();
}

int CollectionIntegers::at(size_t i) const
{
  return this->array.at(i);
}

std::vector<int> const& CollectionIntegers::getArray() const
{
  return this->array;
}

std::ostream& operator<<(std::ostream& os, CollectionIntegers const& integers)
{
  os << "Iterable{array={" <<
     boost::algorithm::join(integers.array |
       boost::adaptors::transformed(static_cast<std::string(*)(int)>(std::to_string)),
       ", ") <<
     "}}";

  return os;
}

IntegerIterator<CollectionIntegers> CollectionIntegers::iterator() const
{
  return IntegerIterator(*this);
}
