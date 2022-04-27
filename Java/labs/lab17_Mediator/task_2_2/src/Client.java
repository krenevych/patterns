public class Client {

    public static void main(String[] args) {


        User user1 = new ConcreteUser("User1");
        User user2 = new ConcreteUser("User1");
        User user3 = new ConcreteUser("User2");
        User user4 = new ConcreteUser("User3");

        user1.sendMessageAll("Hello, world!");

        user2.sendMessage("Hello!", "User1");

    }

}
