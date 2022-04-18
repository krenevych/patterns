public class HandlerType1 extends BaseHandler {
    @Override
    public void handle(Request request) {
        if (request.getType() == Request.Type.TYPE1) {
            System.out.println("Handle request " + request);
        }
        else {
            super.handle(request);
        }
    }
}
