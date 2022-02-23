public abstract class Coffee extends Beverage {
    public Coffee(int sugar) {
        super(sugar);
    }

    @Override
    public void prepare() {
        System.out.println("Put some coffee...");
    }

    @Override
    public int cost() {
        return 10;
    }
}
