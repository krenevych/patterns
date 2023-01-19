#pragma once
#include <string>
#include <map>


class Mediator
{
public:
  virtual void sendMessageAll(std::string const&, std::string const&) = 0;
  virtual void sendMessage(std::string const&, std::string const&, std::string const&) = 0;
};

class User;

class Chat: public Mediator
{
public:
  void addUser(std::string const&, User&);
  void sendMessageAll(std::string const&, std::string const&);
  void sendMessage(std::string const&, std::string const&, std::string const&);

private:
  std::map<std::string, User*> users;
};
