package Lect_5_Factories.CreatioalMethod;

public class Main {

    public static void main(String[] args) {
        Car car = new Car("BMW");
        System.out.println(car);

        Car car1 = car.createBMV();
        System.out.println(car1);

    }
}
