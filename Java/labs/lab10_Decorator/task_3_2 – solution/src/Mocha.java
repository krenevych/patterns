public class Mocha extends CondimentDecorator {
    public Mocha(Beverage beverage) {
        super(beverage);
    }

    @Override
    public String description() {
        return beverage.description() + ", Mocha";
    }

    @Override
    public float cost() {
        return beverage.cost() + 0.1f;
    }
}
