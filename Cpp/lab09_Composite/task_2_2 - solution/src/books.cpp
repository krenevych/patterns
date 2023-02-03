#include <iostream>

#include "books.hpp"


//Book
Book::Book(std::string const& name, bool checkedOut)
: name(name), checkedOut(checkedOut) {}

void Book::checkout()
{
  if (!this->checkedOut)
  {
    std::cout << "Checking out " << this->name << std::endl;
    this->checkedOut = true;
  }
  else
  {
    std::cout << name << " is already checked out" << std::endl;
  }
}

void Book::returnBook()
{
  if (this->checkedOut)
  {
    std::cout << "Returning " << this->name << std::endl;
    this->checkedOut = false;
  }
  else
  {
    std::cout << this->name << " is not checked out" << std::endl;
  }
}


//FictionBook
FictionBook::FictionBook(std::string const& name, bool isAPlay)
: Book(name, false), isAPlay(isAPlay) {}


//NonfictionBook
NonfictionBook::NonfictionBook(std::string const& name)
: Book(name, false) {}
