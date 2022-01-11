public class PostComaDecorator extends BaseDecorator{
    public PostComaDecorator(Component component) {
        super(component);
    }

    @Override
    public void print() {
        super.print();
        System.out.print(", ");
    }
}
