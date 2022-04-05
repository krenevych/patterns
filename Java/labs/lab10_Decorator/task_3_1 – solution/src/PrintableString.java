public class PrintableString implements Component {
    private final String base;

    public PrintableString(String base) {
        this.base = base;
    }

    @Override
    public void print() {
        System.out.print(base);
    }
}
