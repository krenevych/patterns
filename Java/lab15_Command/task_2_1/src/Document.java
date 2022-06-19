public class Document {

    private final String name;

    public Document(String name) {
        this.name = name;
        System.out.println("Creating new document " + name);
    }

    public void save() {
        System.out.println("Saving document " + name + "...");
    }

    public void showInfo() {
        System.out.println("Document " + this.name);
    }

    public void print() {
        System.out.println("Printing document " + name + "...");
    }
}
