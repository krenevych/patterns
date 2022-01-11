public class PostWordDecorator extends BaseDecorator{
    public PostWordDecorator(Component component, String word) {
        super(component);
        this.word = word;
    }

    private final String word;

    @Override
    public void print() {
        super.print();
        System.out.print(word);
    }
}
