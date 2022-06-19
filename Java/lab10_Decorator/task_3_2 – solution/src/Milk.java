public class Milk extends CondimentDecorator {
    public Milk(Beverage beverage) {
        super(beverage);
    }

    @Override
    public String description() {
        return beverage.description() + ", Milk";
    }

    @Override
    public float cost() {
        return beverage.cost() + 0.2f;
    }
}
