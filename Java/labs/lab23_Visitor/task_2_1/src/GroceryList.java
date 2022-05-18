import java.util.ArrayList;

public class GroceryList implements Groceries {

    final private ArrayList<Groceries> groceries = new ArrayList<>();

    public GroceryList() {
    }

    void add(Groceries grocery){
        groceries.add(grocery);
    }

    @Override
    public double getPrice() {
        double sum = 0.0;
        for (Groceries grocery : groceries) {
            sum += grocery.getPrice();
        }
        return sum;
    }

}
