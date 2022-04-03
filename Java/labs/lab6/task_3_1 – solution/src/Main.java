public class Main {
    public static void main(String[] args) {
        Component hello;
        hello = new PrintableString("");
//        hello = new StringComponent("Hello");
        hello = new PostComaDecorator(hello);
        hello = new PostWordDecorator(hello, "World");
        hello = new PostExclaimDecorator(hello);
        hello = new PostEndlDecorator(hello);
        hello = new PreWordDecorator(hello, "Hello");

        hello.print();




    }
}
