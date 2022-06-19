public abstract class Tee extends Beverage {
    public Tee(int sugar) {
        super(sugar);
    }

    @Override
    public void prepare() {
        System.out.println("Put some tee...");
    }

    @Override
    public int cost() {
        return 7;
    }
}
