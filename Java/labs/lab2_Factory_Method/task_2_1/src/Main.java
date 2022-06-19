import java.util.ArrayList;

public class Main {

    private ArrayList<Car> autos = new ArrayList<>();

    private void createAutoPark(CarFactory factory, int n){
        for (int i = 0; i < n; ++i){
            Car car = factory.create();
            autos.add(car);
        }
    }

    private void run(){
        for (Car auto : autos) {
            auto.run();
        }
    }

    public static void main(String[] args) {
        Main main = new Main();

//        CarFactory factory = new AudiFactory();
        CarFactory factory = new ToyotaFactory();
        main.createAutoPark(factory, 15);

        main.run();
    }
}
