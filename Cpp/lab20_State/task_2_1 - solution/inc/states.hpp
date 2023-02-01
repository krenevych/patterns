#pragma once
#include <string>


class Document;


class State
{
public:
  virtual void publish(Document*, std::string const&) = 0;  // публікація
  virtual void abandon(Document*, std::string const&) = 0;
};


class StateDraft: public State
{
public:
  StateDraft();
  void publish(Document*, std::string const&);
  void abandon(Document*, std::string const&);
};


class StateModeration: public State
{
public:
  StateModeration();
  void publish(Document*, std::string const&);
  void abandon(Document*, std::string const&);
};


class StatePublished: public State
{
public:
  StatePublished();
  void publish(Document*, std::string const&);
  void abandon(Document*, std::string const&);
};
