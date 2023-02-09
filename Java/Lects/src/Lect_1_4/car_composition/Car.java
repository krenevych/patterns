package Lect_1_4.car_composition;

public class Car {

    private Engine engine;
    private Wheel wheel;

    public Car(Wheel wheel) {
        this.wheel = wheel;

        engine = new Engine("Gasoline", 150);
    }

    @Override
    public String toString() {
        return "Car{" +
                "engine=" + engine +
                ", wheel=" + wheel +
                '}';
    }
}
