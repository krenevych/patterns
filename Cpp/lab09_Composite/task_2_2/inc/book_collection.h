#pragma once

#include <vector>

#include "fiction_book.h"
#include "nonfiction_book.h"


class BookCollection
{
public:
  BookCollection();
  ~BookCollection();
  void addFictionBook(FictionBook*);
  void addNonfictionBook(NonfictionBook*);
  void checkout();
  void returnBook();

private:
  std::vector<FictionBook*> fictionBooks;
  std::vector<NonfictionBook*> nonfictionBooks;
};
