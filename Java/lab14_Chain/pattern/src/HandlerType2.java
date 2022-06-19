public class HandlerType2 extends BaseHandler {
    @Override
    public void handle(Request request) {
        if (request.getType() == Request.Type.TYPE2) {
            System.out.println("Handle request " + request);
        }
        else {
            super.handle(request);
        }
    }
}
