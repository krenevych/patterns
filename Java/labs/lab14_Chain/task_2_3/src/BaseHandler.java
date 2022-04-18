public class BaseHandler implements Handler {
    private Handler next;

    @Override
    public void setNext(Handler handler) {
        this.next = handler;
    }

    @Override
    public void handle(Request request) {
        if (next != null){
            next.handle(request);
        } else {
            System.out.println(request.getType() + " - unhandled request!");
        }
    }
}
