#pragma once
#include <string>


class Document
{
public:
  Document(std::string const&);
  ~Document();
  void save();
  void showInfo() const;
  void print() const;

private:
  std::string const name;
};
