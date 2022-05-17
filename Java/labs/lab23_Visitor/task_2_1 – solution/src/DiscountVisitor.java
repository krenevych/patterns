public class DiscountVisitor implements Visitor {
    @Override
    public void visit(Bread bread) {
        double price = bread.getPrice();
        bread.setPrice(0.8 * price);
    }

    @Override
    public void visit(Milk milk) {
        double price = milk.getPrice();
        milk.setPrice(0.9 * price);
    }

    @Override
    public void visit(GroceryList groceryList) {
        System.out.println("Discount have been applied to your grocery list");

    }
}
