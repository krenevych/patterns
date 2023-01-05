#pragma once

#include <string>


class NonfictionBook
{
public:
  NonfictionBook(std::string const&);
  ~NonfictionBook();
  void checkout();
  void returnBook();

private:
  std::string const name;
  bool checkedOut;
};
