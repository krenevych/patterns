public class StringComponent implements Component{
    private final String base;

    public StringComponent(String base) {
        this.base = base;
    }

    @Override
    public void print() {
        System.out.print(base);
    }
}
