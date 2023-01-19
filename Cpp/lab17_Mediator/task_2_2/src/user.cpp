#include "user.hpp"

#include <iostream>


ConcreteUser::ConcreteUser(std::string const& userId)
: userId(userId) {}

void ConcreteUser::sendMessageAll(std::string const& message)
{}

void ConcreteUser::sendMessage(std::string const& message, std::string const& userTo)
{}

void ConcreteUser::receiveMassage(std::string const& message, std::string const& userFrom)
{
  std::cout << "User " << this->userId << " receives message: " << message << " from user " << userFrom << std::endl;
}
