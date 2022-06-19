import java.util.ArrayList;

public class Composite implements Component {

    final private ArrayList<Component> children = new ArrayList<>();
    final private int id;

    public Composite(int id) {
        this.id = id;
    }

    public void add(Component component) {
        children.add(component);
    }

    public void remove(Component component) {
        children.remove(component);
    }

    public ArrayList<Component> getChildren() {
        return children;
    }

    @Override
    public void execute() {

        System.out.println(String.format("Composite %s executed!", id));

        for (Component child : children) {
            child.execute();
        }
    }
}
