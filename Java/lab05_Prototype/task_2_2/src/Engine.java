public class Engine implements CloneableEngine {

    @Override
    public Engine clone() {
        return new Engine(this);
    }

    public enum Fuel {
        Petrol,
        Diesel,
        Electric
    }

    final int power;
    final int torque;
    final Fuel fuel;
    final float volume;

    public Engine(int power, int torque, Fuel fuel, float volume) {
        this.power = power;
        this.torque = torque;
        this.fuel = fuel;
        this.volume = volume;
    }

    public Engine(Engine engine) {
        this.power = engine.power;
        this.torque = engine.torque;
        this.fuel = engine.fuel;
        this.volume = engine.volume;
    }

    @Override
    public String toString() {
        return "Engine{" +
                "power=" + power +
                ", torque=" + torque +
                ", fuel=" + fuel +
                ", volume=" + volume +
                '}';
    }
}
