public class Client {

    public static void main(String[] args) {
        Document document = new Document();
        document.setText("hello, World!");

        document.publish("user");
        document.publish("user");
        document.abandon("admin");
        document.setText("Hello, World!");
        document.publish("admin");
    }

}
