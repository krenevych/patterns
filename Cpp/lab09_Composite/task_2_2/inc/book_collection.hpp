#pragma once
#include <vector>

#include "fiction_book.hpp"
#include "nonfiction_book.hpp"


class BookCollection
{
public:
  BookCollection();
  void addFictionBook(FictionBook*);
  void addNonfictionBook(NonfictionBook*);
  void checkout();
  void returnBook();

private:
  std::vector<FictionBook*> fictionBooks;
  std::vector<NonfictionBook*> nonfictionBooks;
};
