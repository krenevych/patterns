package Lect_5_Factories.SimpleFactory;

public class Main {
    public static void main(String[] args) {
        CarFactory factory = new CarFactory();
        Car bmw = factory.create("bmw");
        Car audi = factory.create("audi");
        System.out.println(bmw);
        System.out.println(audi);
        Car car = factory.create("WV");
    }
}
