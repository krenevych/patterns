package Lect_1_4.car_composition;

public class Main {
    public static void main(String[] args) {
        Wheel wheel = new Wheel(17);
        Car car = new Car(wheel);
        System.out.println(car);
    }
}
