public class Client {

    public static void main(String[] args) {

        ConcreteUser user1 = new ConcreteUser("User1");
        ConcreteUser user2 = new ConcreteUser("User2");
        ConcreteUser user3 = new ConcreteUser("User3");
        ConcreteUser user4 = new ConcreteUser("User4");

        Chat chat = new Chat();

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

    }

}
