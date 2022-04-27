public interface User {
    void sendMessageAll(String message);
    void sendMessage(String message, String to);
    void receiveMassage(String message);
}
