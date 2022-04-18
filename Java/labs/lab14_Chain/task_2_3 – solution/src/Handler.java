public interface Handler {
    void setProperty(Image image);
    void setNext(Handler handler);
}
