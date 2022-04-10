import java.util.Random;
import java.util.concurrent.Executors;
import java.util.concurrent.ScheduledExecutorService;
import java.util.concurrent.TimeUnit;

public class TrafficSimulator {

  static VehicleFactory vehicleFactory = new VehicleFactory();

  public static void main(String[] args) {

    Runnable createVehicles = new Runnable() {
      public void run() {
        createRandomCar();
      }
    };

    ScheduledExecutorService executor = Executors.newScheduledThreadPool(1);
    executor.scheduleAtFixedRate(createVehicles, 0, 2, TimeUnit.SECONDS);
  }

  private static void createRandomCar() {
    Random random = new Random();
    int randInt = random.nextInt(2);
    Vehicle vehicle = vehicleFactory.getVehicle(randInt);
    vehicle.target(random.nextInt(1000), random.nextInt(1000));
    System.out.println("Creating " + vehicle + ", type: " + vehicle.getType() + ", task: " + vehicle.getTask());
  }


}
