public class Car implements CloneableCar {

    @Override
    public Car clone() {
        return new Car(type, carColor, engine.clone(), wheel.clone());
    }

    public enum CarColor {
        White,
        Black,
        Red,
        Grey
    }

    public enum Type {
        Sedan,
        Hatchback,
        SUV
    }

    final private Type type;
    final private CarColor carColor;
    final private Engine engine;
    final private Wheel wheel;

    public Car(Type type, CarColor carColor,
               Engine engine, Wheel wheel) {
        this.type = type;
        this.carColor = carColor;
        this.engine = engine;
        this.wheel = wheel;
    }

    @Override
    public String toString() {
        return "Car:\n" +
                "type=" + type +
                ",\ncarColor=" + carColor +
                ",\nengine=" + engine +
                ",\nwheel=" + wheel +
                '\n';
    }
}
