import java.util.ArrayList;

public class GroceryList implements Groceries {

    ArrayList<Groceries> groceries = new ArrayList<Groceries>();

    public GroceryList() {
        Bread bread = new Bread();
        Bread bread2 = new Bread();
        Milk milk = new Milk();
        groceries.add(bread);
        groceries.add(milk);
        groceries.add(bread2);
    }

    public double getPrice() {
        double sum = 0.0;
        for (Groceries grocery : groceries) {
            sum += grocery.getPrice();
        }
        return sum;
    }

    @Override
    public void accept(Visitor visitor) {
        for (Groceries grocery : groceries) {
            grocery.accept(visitor);
        }
    }

}
