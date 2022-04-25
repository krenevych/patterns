public class Element {

    private String name;

    public Element(String name) {
        this.name = name;
    }

    public void setName(String name) {
        this.name = name;
    }

    @Override
    public String toString() {
        return "Element{" +
                "name='" + name + '\'' +
                '}';
    }
}
