public class DiscountVisitor implements Visitor {

    private float discountCoefficient = 1.0f;

    public DiscountVisitor(float discountCoeficient) {
        this.discountCoefficient = discountCoeficient;
    }

    @Override
    public void visit(Bread bread) {
        double price = bread.getPrice();
        bread.setPrice(discountCoefficient * price);
    }

    @Override
    public void visit(Milk milk) {
        double price = milk.getPrice();
        milk.setPrice(discountCoefficient * price);
    }

    @Override
    public void visit(GroceryList list) {
        System.out.println("Discount has been applied to each grocery in list!");
    }

    @Override
    public void visit(Coffee coffee) {
        double price = coffee.getPrice();
        coffee.setPrice(discountCoefficient * price);
    }
}
