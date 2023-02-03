#include "book_collection.hpp"


BookCollection::BookCollection() {}

void BookCollection::addFictionBook(FictionBook* fictionBook)
{
  fictionBooks.push_back(fictionBook);
}

void BookCollection::addNonfictionBook(NonfictionBook* nonfictionBook)
{
  nonfictionBooks.push_back(nonfictionBook);
}

void BookCollection::checkout()
{
  for (auto & nonfiction_book: this->nonfictionBooks)
  {
    nonfiction_book->checkout();
  }

  for (auto & fiction_book: this->fictionBooks)
  {
    fiction_book->checkout();
  }
}

void BookCollection::returnBook()
{
  for (auto & nonfiction_book: this->nonfictionBooks)
  {
    nonfiction_book->returnBook();
  }

  for (auto & fiction_book: this->fictionBooks)
  {
    fiction_book->returnBook();
  }
}
