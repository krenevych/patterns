
public class Client {
    public static void main(String[] args) {

        Handler handlerCamera = new PropertyHandlerCamera("Samsung Galaxy S22 Ultra");
        Handler handlerType = new PropertyHandlerType(Image.Type.jpg);
        Handler handlerDateTime = new PropertyHandlerDateTime();
        Handler handlerName = new PropertyHandlerName();
        handlerCamera.setNext(handlerType);
        handlerType.setNext(handlerDateTime);
        handlerDateTime.setNext(handlerName);

        Image image = new Image();
        handlerCamera.setProperty(image);

        System.out.println(image);
    }
}
