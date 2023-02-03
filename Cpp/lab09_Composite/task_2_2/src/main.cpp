#include "book_collection.hpp"


int main()
{
  NonfictionBook nonfictionBook{"A Brief History of Time"};
  FictionBook fictionBookOne{"Hamlet", true};
  FictionBook fictionBookTwo{"The Great Gatsby", false};

  BookCollection bookCollection;
  bookCollection.addNonfictionBook(&nonfictionBook);
  bookCollection.addFictionBook(&fictionBookOne);
  bookCollection.addFictionBook(&fictionBookTwo);

  nonfictionBook.checkout();
  fictionBookOne.checkout();
  bookCollection.checkout();

  nonfictionBook.returnBook();
  fictionBookOne.returnBook();
  bookCollection.returnBook();

  return 0;
}
