public class PropertyHandler implements Handler {

    private Handler next;

    @Override
    public void setProperty(Image image) {
        if (next != null) {
            next.setProperty(image);
        }
    }

    @Override
    public void setNext(Handler handler) {
        next = handler;
    }
}
