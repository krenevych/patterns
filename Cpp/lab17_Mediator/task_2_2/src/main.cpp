#include "user.hpp"


int main()
{
  ConcreteUser user1{"User1"};
  ConcreteUser user2{"User2"};
  ConcreteUser user3{"User3"};
  ConcreteUser user4{"User4"};

  user1.sendMessageAll("Hello, world!");

  user2.sendMessage("Hello!", "User1");

  user3.receiveMassage("Hello!", "User4");

  return 0;
}
