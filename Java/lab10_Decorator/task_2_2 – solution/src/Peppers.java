public class Peppers extends Toppings {
    public Peppers(Pizza pizza) {
        super(pizza);
    }

    @Override
    public String description() {
        return pizza.description() + " + Peppers";
    }

    @Override
    public float cost() {
        return pizza.cost() + 1.5f;
    }
}
