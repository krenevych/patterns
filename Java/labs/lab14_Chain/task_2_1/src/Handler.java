public interface Handler {
    void open(String fileName);
    void setNext(Handler handler);
}
