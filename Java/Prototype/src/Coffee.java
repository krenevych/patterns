public class Coffee implements Copyable {
    private final int price;
    private final int volume;
    private final String coffee;
    private final int sugar;
    private final boolean milk;

    public Coffee(Coffee other) {
        this.price = other.price;
        this.volume = other.volume;
        this.coffee = other.coffee;
        this.sugar = other.sugar;
        this.milk = other.milk;
    }

    public Coffee(int price, int volume, String coffee, int sugar, boolean milk) {
        this.price = price;
        this.volume = volume;
        this.coffee = coffee;
        this.sugar = sugar;
        this.milk = milk;
    }

    @Override
    public String toString() {
        return "Coffee{" +
                "price=" + price +
                ", volume=" + volume +
                ", coffee='" + coffee + '\'' +
                ", sugar='" + sugar + '\'' +
                ", milk='" + milk + '\'' +
                '}';
    }


    @Override
    public Object clone() {
        return new Coffee(price, volume, coffee, sugar, milk);
    }
}
