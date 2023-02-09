package Lect_5_Factories.StaticFactoryMethod;

public class Main {
    public static void main(String[] args) {
        Car car = Car.create("BMV");
        System.out.println(car);
        Car car1 = Car.create("BMV");
        System.out.println(car1);
        Car car2 = Car.create("Audi");
        System.out.println(car2);
    }
}
