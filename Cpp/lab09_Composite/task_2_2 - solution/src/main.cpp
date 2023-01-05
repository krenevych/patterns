#include "books.h"
#include "book_collection.h"


int main()
{
  NonfictionBook nonfictionBook = NonfictionBook("A Brief History of Time");
  FictionBook fictionBookOne = FictionBook("Hamlet", true);
  FictionBook fictionBookTwo = FictionBook("The Great Gatsby", false);

  BookCollection bookCollection = BookCollection();
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
