public class Client {
    public static void main(String[] args) {
        Handler handler1 = new ConcreteHandler(Request.Type.Type1);
        Handler handler2 = new ConcreteHandler(Request.Type.Type2);
        Handler handler3 = new ConcreteHandler(Request.Type.Type3);
        Handler handler4 = new ConcreteHandler(Request.Type.Type4);
        Handler handler5 = new ConcreteHandler(Request.Type.Type5);

        handler1.setNext(handler2);
        handler2.setNext(handler3);
        handler3.setNext(handler4);
        handler4.setNext(handler5);

        Request request1 = new Request(Request.Type.Type1);
        Request request2 = new Request(Request.Type.Type2);
        Request request3 = new Request(Request.Type.Type3);
        Request request6 = new Request(Request.Type.Type6);
        handler1.handle(request1);
        handler1.handle(request2);
        handler1.handle(request3);
        handler1.handle(request6);

    }
}
