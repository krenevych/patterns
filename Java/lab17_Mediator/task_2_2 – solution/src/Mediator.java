public interface Mediator {

    void sendMessageAll(String message, String userFrom);
    void sendMessage(String message, String userFrom, String userTo);

}
