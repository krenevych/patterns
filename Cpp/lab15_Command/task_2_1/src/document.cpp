#include "document.hpp"

#include <iostream>


Document::Document(std::string const& name)
: name(name)
{
  std::cout << "Creating new document " << this->name << std::endl;
}

Document::~Document() {}

void Document::save()
{
  std::cout << "Saving document " << this->name << "..." << std::endl;
}

void Document::showInfo() const
{
  std::cout << "Document " << this->name << std::endl;
}

void Document::print() const
{
  std::cout << "Printing document " << this->name << "..." << std::endl;
}
