public class Coffee implements Groceries {
    @Override
    public double getPrice() {
        return price;
    }

    public void setPrice(double price) {
        this.price = price;
    }

    private double price  = 50;

    @Override
    public void accept(Visitor visitor) {
        visitor.visit(this);
    }
}
