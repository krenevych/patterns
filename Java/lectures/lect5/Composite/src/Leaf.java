public class Leaf implements Component {

    final private int id;

    public Leaf(int id) {
        this.id = id;
    }

    @Override
    public void execute() {
        System.out.println(String.format("Leaf %s executed!", id));
    }
}
