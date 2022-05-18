public class IncreasingPriceVisitor implements Visitor {
    @Override
    public void visit(Bread bread) {
        bread.setPrice(1.2);
    }

    @Override
    public void visit(Milk milk) {
        milk.setPrice(2.2);
    }

    @Override
    public void visit(GroceryList list) {
        System.out.println("Prices have been increased... :( ");
    }

    @Override
    public void visit(Coffee coffee) {
        coffee.setPrice(60);
    }
}
