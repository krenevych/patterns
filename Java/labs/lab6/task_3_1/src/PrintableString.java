public class PrintableString {
    private final String base;

    public PrintableString(String base) {
        this.base = base;
    }

    public void print() {
        System.out.print(base);
    }
}
