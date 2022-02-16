public class Car {

    enum CarColor {
        Red,
        White,
        Grey,
        Black,
    }

    enum Type {
        Sedan,
        Hatchback,
        SUV,
    }

    public Car(Type type, Engine engine, Wheel wheel, CarColor color) {
        this.type = type;
        this.engine = engine;
        this.wheel = wheel;
        this.color = color;
    }

    public Type getType() {
        return type;
    }

    public Engine getEngine() {
        return engine;
    }

    public Wheel getWheel() {
        return wheel;
    }

    public CarColor getColor() {
        return color;
    }

    @Override
    public String toString() {
        return "Car:\n" +
                "type=" + type +
                ",\nengine=" + engine +
                ",\nwheel=" + wheel +
                ",\ncolor=" + color +
                "\n";
    }

    final private Type type;
    final private Engine engine;
    final private Wheel wheel;
    final private CarColor color;


}
