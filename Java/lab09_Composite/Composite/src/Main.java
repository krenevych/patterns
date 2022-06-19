public class Main {
    public static void main(String[] args) {

        final Composite root = new Composite(-999);

        for (int j = 0; j < 10; j++) {
            final Composite container = new Composite(j);
            root.add(container);
            for (int i = 0; i <10; i++) {
                final Leaf leaf = new Leaf(j * 10 + i);
                container.add(leaf);
            }
        }

        root.execute();
    }
}
