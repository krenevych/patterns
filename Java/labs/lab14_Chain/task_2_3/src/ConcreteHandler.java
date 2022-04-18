public class ConcreteHandler extends BaseHandler {
    final private Request.Type requestType;

    public ConcreteHandler(Request.Type matcher) {
        this.requestType = matcher;
    }

    @Override
    public void handle(Request request) {
        if (request.getType() == requestType) {
            System.out.println("Handled by handler " + requestType);
        } else {
            super.handle(request);
        }
    }
}
