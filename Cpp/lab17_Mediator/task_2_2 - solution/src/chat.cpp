#include "chat.hpp"
#include "user.hpp"


void Chat::addUser(std::string const& id, User& user)
{
  this->users.insert({id, &user});
}

void Chat::sendMessageAll(std::string const& message, std::string const& userFrom)
{
  for (auto& userEntry: this->users)
  {
    userEntry.second->receiveMassage(message, userFrom);
  }
}

void Chat::sendMessage(std::string const& message, std::string const& userFrom, std::string const& userTo)
{
  User* user = this->users.at(userTo);
  user->receiveMassage(message, userFrom);
}
