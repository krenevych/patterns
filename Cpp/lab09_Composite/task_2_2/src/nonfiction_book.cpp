#include <iostream>

#include "nonfiction_book.hpp"


NonfictionBook::NonfictionBook(std::string const& name)
: name(name), checkedOut(false) {}

void NonfictionBook::checkout()
{
  if (!this->checkedOut)
  {
    std::cout << "Checking out " << this->name << std::endl;
    this->checkedOut = true;
  }
  else
  {
    std::cout << this->name << " is already checked out" << std::endl;
  }
}

void NonfictionBook::returnBook()
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
