import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {
        ArrayList<CarFactory> carFactories = new ArrayList<>();
        carFactories.add(new BMWFactory());
        carFactories.add(new MazdaFactory());
        carFactories.add(new AudiFactory());

        ArrayList<Car>  cars = new ArrayList<>();


        for (CarFactory factory : carFactories) {
            for (int i = 0; i < 10; ++i){
                Car car = factory.create();
                cars.add(car);
            }
        }

        for (Car car : cars) {
            car.run();
        }

    }
}
