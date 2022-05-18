public class Milk implements Groceries {

    private double price = 2;

    public void setPrice(double price) {
        this.price = price;
    }

    @Override
    public double getPrice() {
        return price;
    }


}
