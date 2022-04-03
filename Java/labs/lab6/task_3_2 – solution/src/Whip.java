public class Whip extends CondimentDecorator {
    public Whip(Beverage beverage) {
        super(beverage);
    }

    @Override
    public String description() {
        return beverage.description() + ", Whip";
    }

    @Override
    public float cost() {
        return beverage.cost() + 0.3f;
    }
}
