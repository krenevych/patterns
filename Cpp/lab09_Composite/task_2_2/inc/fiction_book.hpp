#pragma once
#include <string>


class FictionBook
{
public:
  FictionBook(std::string const&, bool);
  void checkout();
  void returnBook();

private:
  std::string const name;
  bool checkedOut;
  bool isAPlay;
};
