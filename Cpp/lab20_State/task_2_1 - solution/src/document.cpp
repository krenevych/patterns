#include "document.hpp"


Document::Document()
: state(new StateDraft()) {}

void Document::setState(State* state)
{
  delete this->state;
  this->state = state;
}

void Document::publish(std::string const& user)
{
  this->state->publish(this, user);
}

void Document::abandon(std::string const& user)
{
  this->state->abandon(this, user);
}

std::string const& Document::getText() const
{
  return this->text;
}

void Document::setText(std::string const& text)
{
  this->text = text;
}
