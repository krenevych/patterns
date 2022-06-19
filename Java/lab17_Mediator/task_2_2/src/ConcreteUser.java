public class ConcreteUser implements User {

    final private String userId;

    public ConcreteUser(String userId) {
        this.userId = userId;
    }

    @Override
    public void sendMessageAll(String message) {

    }

    @Override
    public void sendMessage(String message, String userTo) {

    }

    @Override
    public void receiveMassage(String message, String userFrom) {
        System.out.println("User " + userId + " receives message: " + message + " from user " + userFrom);
    }
}
