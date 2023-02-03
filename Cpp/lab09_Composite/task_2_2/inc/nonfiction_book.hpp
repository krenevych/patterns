#pragma once
#include <string>


class NonfictionBook
{
public:
  NonfictionBook(std::string const&);
  void checkout();
  void returnBook();

private:
  std::string const name;
  bool checkedOut;
};
