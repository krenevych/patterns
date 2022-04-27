public class ConcreteUser implements User {

    final private String userId;

    public ConcreteUser(String userId) {
        this.userId = userId;
    }

    @Override
    public void sendMessageAll(String message) {

    }

    @Override
    public void sendMessage(String message, String to) {

    }

    @Override
    public void receiveMassage(String message) {

    }
}
