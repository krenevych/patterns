public class Element {
    final private String id;

    public Element(String id) {
        this.id = id;
    }

    @Override
    public String toString() {
        return "Element{" +
                "id='" + id + '\'' +
                '}';
    }
}
