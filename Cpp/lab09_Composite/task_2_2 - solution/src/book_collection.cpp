#include "book_collection.h"

#include <algorithm>


BookCollection::BookCollection() {}

BookCollection::~BookCollection() {}

std::vector<Readable*>& BookCollection::getChildren()
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
