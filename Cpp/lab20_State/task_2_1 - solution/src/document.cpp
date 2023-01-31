#include "document.hpp"


void Document::publish(std::string const& user)
{}

void Document::abandon(std::string const& user)
{}

std::string const& Document::getText() const
{
  return this->text;
}

void Document::setText(std::string const& text)
{
  this->text = text;
}
