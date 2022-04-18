public class Client {
    public static void main(String[] args) {

        // Створюємо елементи ланцюжка
        Handler handlerType1 = new HandlerType1();
        Handler handlerType2 = new HandlerType2();
        Handler handlerType3 = new HandlerType3();

        // Пов'язуємо елементи у ланцюжок обов'язків
        handlerType1.setNext(handlerType2);
        handlerType2.setNext(handlerType3);

//        Request request = new Request(Request.Type.TYPE1);
//        handlerType1.handle(request);
//
//        Request request2 = new Request(Request.Type.TYPE2);
//        handlerType1.handle(request2);

//        Request request3 = new Request(Request.Type.TYPE3);
//        handlerType1.handle(request3);

        Request request4 = new Request(Request.Type.TYPE4);
        handlerType1.handle(request4);
    }
}
