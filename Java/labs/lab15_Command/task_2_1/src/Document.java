public class Document {

    private String name;

    Document(String name) {
        System.out.println("Creating new document " + name);
    }

    void save() {
        System.out.println("Saving document " + name + "...");
    }

    void showInfo() {
        System.out.println("Document " + this.name);
    }

    void print() {
        System.out.println("Printing document " + name + "...");
    }
}
