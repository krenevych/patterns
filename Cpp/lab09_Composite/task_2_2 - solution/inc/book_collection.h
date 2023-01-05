#pragma once

#include <vector>

#include "readable.h"


class BookCollection: public Readable
{
public:
  BookCollection();
  ~BookCollection();
  std::vector<Readable*>& getChildren();
  void add(Readable*);
  void remove(Readable*);
  void checkout();
  void returnBook();

private:
  std::vector<Readable*> children;
};
