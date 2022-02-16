public class Number {
    private final int current;

    public Number(int current) {
        this.current = current;
    }

    /* Створюючий метод */
    public Number next() {
        return new Number(current + 1);
    }

    @Override
    public String toString() {
        return "Number{" +
                "current=" + current +
                '}';
    }
}
