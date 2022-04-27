public class ConcreteUser implements User {

    final private String userId;
    private Chat chat;


    public void setChat(Chat chat) {
        this.chat = chat;
    }


    public ConcreteUser(String userId) {
        this.userId = userId;
    }

    @Override
    public void sendMessageAll(String message) {
        chat.sendMessageAll(message, userId);
    }

    @Override
    public void sendMessage(String message, String userTo) {
        chat.sendMessage(message, userId, userTo);
    }

    @Override
    public void receiveMassage(String message, String userFrom) {
        System.out.println("User " + userId + " receives message: " + message + " from user " + userFrom);
    }
}
