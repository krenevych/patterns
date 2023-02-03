#include <algorithm>

#include "book_collection.hpp"


BookCollection::BookCollection() {}

std::vector<Readable*> const& BookCollection::getChildren() const
{
  return this->children;
}

void BookCollection::add(Readable* readable)
{
  this->children.push_back(readable);
}

void BookCollection::remove(Readable* readable)
{
  std::remove(
    this->children.begin(),
    this->children.end(),
    readable
  );
}

void BookCollection::checkout()
{
  for (auto & child: this->children)
  {
    child->checkout();
  }
}

void BookCollection::returnBook()
{
  for (auto & child: this->children)
  {
    child->returnBook();
  }
}
