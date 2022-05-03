public class Client {


    private static TextDocument textDocument = new TextDocument();

    public static void main(String[] args) {
        textDocument.write("Hello");
        textDocument.print();
        textDocument.save();

        textDocument.write(", ");
        textDocument.print();

        textDocument.write("World");
        textDocument.print();

        textDocument.write("!");
        textDocument.print();
        textDocument.undo();
        textDocument.print();
    }

}
