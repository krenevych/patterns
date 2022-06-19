public class Client {

    public static void main(String[] args) {

        ConcreteUser user1 = new ConcreteUser("User1");
        ConcreteUser user2 = new ConcreteUser("User2");
        ConcreteUser user3 = new ConcreteUser("User3");
        ConcreteUser user4 = new ConcreteUser("User4");

        user1.sendMessageAll("Hello, world!");

        user2.sendMessage("Hello!", "User1");

    }

}
