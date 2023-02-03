#pragma once
#include <vector>

#include "readable.hpp"


class BookCollection: public Readable
{
public:
  BookCollection();
  std::vector<Readable*> const& getChildren() const;
  void add(Readable*);
  void remove(Readable*);
  void checkout();
  void returnBook();

private:
  std::vector<Readable*> children;
};
