#include "user.hpp"
#include "chat.hpp"


int main()
{
  ConcreteUser user1{"User1"};
  ConcreteUser user2{"User2"};
  ConcreteUser user3{"User3"};
  ConcreteUser user4{"User4"};

  Chat chat;

  chat.addUser("User1", user1);
  chat.addUser("User2", user2);
  chat.addUser("User3", user3);
  chat.addUser("User4", user4);

  user1.setChat(chat);
  user2.setChat(chat);
  user3.setChat(chat);
  user4.setChat(chat);

  user1.sendMessageAll("Hello, world!");

  user2.sendMessage("Hello!", "User1");

  user3.receiveMassage("Hello!", "User4");

  return 0;
}
