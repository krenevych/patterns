import java.util.HashMap;

public class VehicleFactory {
    HashMap<Integer, Vehicle> vehicles = new HashMap<>();

    public Vehicle getVehicle(int type){
        Vehicle vehicle = vehicles.get(type);
        if (vehicle == null){
            if (type == 0){
                vehicle = new Car();
            } else if (type == 1){
                vehicle = new Truck();
            }
            vehicles.put(type, vehicle);
        }
        return vehicle;
    }
}
