abstract public class CondimentDecorator extends Beverage {

    final protected Beverage beverage;

    public CondimentDecorator(Beverage beverage) {
        this.beverage = beverage;
    }
}
