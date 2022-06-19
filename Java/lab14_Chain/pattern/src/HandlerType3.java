public class HandlerType3 extends BaseHandler {
    @Override
    public void handle(Request request) {
        if (request.getType() == Request.Type.TYPE3) {
            System.out.println("Handle request " + request);
        }
        else {
            super.handle(request);
        }
    }
}
