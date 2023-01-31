#pragma once
#include <string>


class Document
{
private:
  std::string text;

public:
  void publish(std::string const&);
  void abandon(std::string const&);

  std::string const& getText() const;
  void setText(std::string const&);
};
