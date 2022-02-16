public class Main {
    public static void main(String[] args) {
        CarBuilder carBuilder = new CarBuilder();

        CarDirector director = new CarDirector();
        director.setCarBuilder(carBuilder);

        Car car = director.makeDefaultCar();
        Car sportCar = director.makeSportCar();


        Car clone_car = car.clone();
        Car clone_sportcar = sportCar.clone();


        System.out.println(car);
        System.out.println(clone_car);
        System.out.println(sportCar);
        System.out.println(clone_sportcar);


    }
}
