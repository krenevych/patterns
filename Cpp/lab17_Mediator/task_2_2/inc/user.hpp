#pragma once
#include <string>


class User
{
public:
  virtual void sendMessageAll(std::string const&) const = 0;
  virtual void sendMessage(std::string const&, std::string const&) const = 0;
  virtual void receiveMassage(std::string const&, std::string const&) const = 0;
};


class ConcreteUser: public User
{
public:
  ConcreteUser(std::string const&);
  void sendMessageAll(std::string const&) const;
  void sendMessage(std::string const&, std::string const&) const;
  void receiveMassage(std::string const&, std::string const&) const;

private:
  std::string const userId;
};
