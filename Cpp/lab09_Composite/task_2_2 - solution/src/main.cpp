#include "books.hpp"
#include "book_collection.hpp"


int main()
{
  NonfictionBook nonfictionBook{"A Brief History of Time"};
  FictionBook fictionBookOne{"Hamlet", true};
  FictionBook fictionBookTwo{"The Great Gatsby", false};

  BookCollection bookCollection;
  bookCollection.add(&nonfictionBook);
  bookCollection.add(&fictionBookOne);
  bookCollection.add(&fictionBookTwo);

  nonfictionBook.checkout();
  fictionBookOne.checkout();
  bookCollection.checkout();

  nonfictionBook.returnBook();
  fictionBookOne.returnBook();
  bookCollection.returnBook();

  return 0;
}
