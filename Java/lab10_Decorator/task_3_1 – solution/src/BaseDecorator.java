public abstract class BaseDecorator implements Component{
    private final Component component;

    public BaseDecorator(Component component) {
        this.component = component;
    }

    @Override
    public void print() {
        component.print();
    }
}
