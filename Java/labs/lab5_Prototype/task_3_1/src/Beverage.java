public abstract class Beverage {

    protected final int sugar;

    public Beverage(int sugar) {
        this.sugar = sugar;
    }

    public abstract void prepare();
    public abstract void drink();
    public abstract int cost();
}
