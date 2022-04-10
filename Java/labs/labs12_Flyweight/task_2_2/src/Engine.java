public class Engine {
    public enum Fuel {
        Petrol,
        Diesel,
        Electric
    }

    final int power;
    final Fuel fuel;

    public Engine(int power, Fuel fuel) {
        this.power = power;
        this.fuel = fuel;
    }

    @Override
    public String toString() {
        return "Engine{" +
                "power=" + power +
                ", fuel=" + fuel +
                '}';
    }
}
