#pragma once
#include <string>


class User
{
public:
  virtual void sendMessageAll(std::string const&) = 0;
  virtual void sendMessage(std::string const&, std::string const&) = 0;
  virtual void receiveMassage(std::string const&, std::string const&) = 0;
};


class ConcreteUser: public User
{
public:
  ConcreteUser(std::string const&);
  void sendMessageAll(std::string const&);
  void sendMessage(std::string const&, std::string const&);
  void receiveMassage(std::string const&, std::string const&);

private:
  std::string const userId;
};
