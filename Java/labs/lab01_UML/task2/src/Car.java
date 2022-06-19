public class Car extends Vehicle {

    final private String model;
    final private static int numberOfWheels = 4;
    final private Engine engine;

    public Car(String model) {
        this.hasWheels = true;
        this.model = model;
        this.engine = new Engine(360);
    }

    @Override
    public float go(int seconds) {
        return this.engine.getPower() * seconds / 1000.0f;
    }
}
