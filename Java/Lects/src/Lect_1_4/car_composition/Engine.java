package Lect_1_4.car_composition;

public class Engine {
    private String fuelType;
    private int power;

    public Engine(String fuelType, int power) {
        this.fuelType = fuelType;
        this.power = power;
    }

    @Override
    public String toString() {
        return "Lect_1_4.car_composition.Engine{" +
                "fuelType='" + fuelType + '\'' +
                ", power=" + power +
                '}';
    }
}
