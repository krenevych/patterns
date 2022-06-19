import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {

        ArrayList<Bus> buses = new ArrayList<>();
        ArrayList<Tram> trams = new ArrayList<>();
        ArrayList<Trolleybus> trolleybuses = new ArrayList<>();

        TransportFactory transportFactory = new SkodaFactory(); // = Одна з фабрик
//        TransportFactory transportFactory = new VolvoFactory(); // = Одна з фабрик

        final int A = 10;
        final int T = 5;
        final int Tr = 40;
        final int N = 200_000; // орієнтований пробіг експлуатації

        for (int i = 0; i < A; i++) {
            Bus bus = transportFactory.createBus();
            buses.add(bus);
        }

        for (int i = 0; i < T; i++) {
            Tram tram = transportFactory.createTram();
            trams.add(tram);
        }

        for (int i = 0; i < Tr; i++) {
            Trolleybus trolley = transportFactory.createTrolley();
            trolleybuses.add(trolley);
        }

        int finalCostContract = 0;
        for (Bus bus : buses) {
            finalCostContract += bus.getCost() + bus.getUsagecost() * N;
        }

        for (Tram tram : trams) {
            finalCostContract += tram.getCost() + tram.getUsagecost() * N;
        }

        for (Trolleybus trolleybus : trolleybuses) {
            finalCostContract += trolleybus.getCost() + trolleybus.getUsagecost() * N;
        }

        System.out.println(finalCostContract);
        //        100k
        // 443_000_000 Skoda
        // 465_500_000 Volvo

        // 200k
        //  Skoda 524_000_000
        //  Volvo 541_000_000
    }
}
