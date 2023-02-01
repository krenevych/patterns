#pragma once
#include <string>

#include "states.hpp"


class Document
{
private:
  std::string text;
  State* state;

public:
  Document();
  ~Document();
  void setState(State*);
  void publish(std::string const&);
  void abandon(std::string const&);

  std::string const& getText() const;
  void setText(std::string const&);
};
