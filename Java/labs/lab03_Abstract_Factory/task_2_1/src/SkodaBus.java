public class SkodaBus extends Bus {
    public SkodaBus() {
        super(4500000, 25);
    }

    @Override
    public void goByWay() {
        System.out.println("Skoda Bus runs!");
    }
}
