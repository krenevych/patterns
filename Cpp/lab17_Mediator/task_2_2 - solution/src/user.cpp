#include <iostream>

#include "user.hpp"
#include "chat.hpp"


ConcreteUser::ConcreteUser(std::string const& userId)
: userId(userId) {}

void ConcreteUser::setChat(Chat& chat)
{
  this->chat = &chat;
}

void ConcreteUser::sendMessageAll(std::string const& message)
{
  this->chat->sendMessageAll(message, this->userId);
}

void ConcreteUser::sendMessage(std::string const& message, std::string const& userTo)
{
  this->chat->sendMessage(message, this->userId, userTo);
}

void ConcreteUser::receiveMassage(std::string const& message, std::string const& userFrom)
{
  std::cout << "User " << this->userId << " receives message: " << message << " from user " << userFrom << std::endl;
}
