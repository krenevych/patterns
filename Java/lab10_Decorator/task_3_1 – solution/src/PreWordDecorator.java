public class PreWordDecorator extends BaseDecorator{
    public PreWordDecorator(Component component, String word) {
        super(component);
        this.word = word;
    }

    private final String word;

    @Override
    public void print() {
        System.out.print(word);
        super.print();
    }
}
