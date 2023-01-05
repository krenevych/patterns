#pragma once

#include <string>

#include "readable.h"


class Book: public Readable
{
public:
  Book(std::string const&, bool);
  ~Book();
  void checkout();
  void returnBook();

protected:
  std::string const name;
  bool checkedOut;
};


class FictionBook: public Book
{
public:
  FictionBook(std::string const&, bool);
  ~FictionBook();

private:
  bool isAPlay;
};


class NonfictionBook: public Book
{
public:
  NonfictionBook(std::string const&);
  ~NonfictionBook();
};
