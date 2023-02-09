package Lect_1_4.car_composition;

public class Wheel {

    private int radius;

    public Wheel(int radius) {
        this.radius = radius;
    }

    @Override
    public String toString() {
        return "Wheel{" +
                "radius=" + radius +
                '}';
    }
}
