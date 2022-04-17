import java.util.ArrayList;
import java.util.Random;
import java.util.concurrent.Executors;
import java.util.concurrent.ScheduledExecutorService;
import java.util.concurrent.TimeUnit;

public class CarSimulator {

  static ArrayList<Car> vehicles = new ArrayList<>();
  final static private CarBuilder carBuilder = new CarBuilder();

  public static void main(String[] args) {

    Runnable createVehicles = new Runnable() {
      public void run() {
        createRandomCar();
      }
    };

    ScheduledExecutorService executor = Executors.newScheduledThreadPool(1);
    executor.scheduleAtFixedRate(createVehicles, 0, 1, TimeUnit.SECONDS);
  }

  private static void createRandomCar() {
    Random random = new Random();

    Engine.Fuel fuel = Engine.Fuel.values()[random.nextInt(3)];
    int wheel_diameter = random.nextInt(17, 20);
    int power = random.nextInt(11, 15) * 10;
    Car.CarColor color = Car.CarColor.values()[random.nextInt(5)];

    Car car = carBuilder
            .reset()
            .setCarColor(color)
            .setEngine(new Engine(power, fuel))
            .setWheel(new Wheel(wheel_diameter))
            .build();
    System.out.println("Creating " + car);
    car.showInfo();

    vehicles.add(car);
  }

}
