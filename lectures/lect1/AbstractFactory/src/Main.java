import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {

        final int numberBuses = 20;
        final int numberTrams = 5;
        final int numberTrolleys = 15;

        ArrayList<Bus> buses = new ArrayList<>();
        ArrayList<Tram> trams = new ArrayList<>();
        ArrayList<Trolleybus> trolleybuses = new ArrayList<>();

//        TransportFactory factory = new SkodaFactory();
        TransportFactory factory = new VolvoFactory();

        for (int b = 0; b < numberBuses; b++){
            buses.add(factory.createBus());
        }

        for (int tr = 0; tr < numberTrams; tr++){
            trams.add(factory.createTram());
        }

        for (int trolley = 0; trolley < numberTrolleys; trolley++){
            trolleybuses.add(factory.createTrolleybus());
        }


        for (Bus bus : buses) {
            bus.runByRoad();
        }

        for (Tram tram : trams) {
            tram.runByRails();
        }

        for (Trolleybus trolleybus : trolleybuses) {
            trolleybus.runByContactNetwork();
        }


    }
}
