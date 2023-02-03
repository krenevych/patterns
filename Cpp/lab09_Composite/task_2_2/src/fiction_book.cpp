#include <iostream>

#include "fiction_book.hpp"


FictionBook::FictionBook(std::string const& name, bool isAPlay)
: name(name), isAPlay(isAPlay), checkedOut(false) {}

void FictionBook::checkout()
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

void FictionBook::returnBook()
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
