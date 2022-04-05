public class Cheese extends Toppings {
    public Cheese(Pizza pizza) {
        super(pizza);
    }

    @Override
    public String description() {
        return pizza.description() + " + Cheese";
    }

    @Override
    public float cost() {
        return pizza.cost() + 0.5f;
    }
}
