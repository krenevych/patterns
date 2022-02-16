public class CarWithType extends Car {
    private final String type;

    public CarWithType(String color, int power, int torque, float volume, String type) {
        super(color, power, torque, volume);
        this.type = type;
    }

    public CarWithType(Car other, String type) {
        super(other);
        this.type = type;
    }

    public CarWithType(CarWithType other) {
        super(other);
        this.type = other.type;
    }

    @Override
    public Car clone() {
        return new CarWithType(this);
    }
}
