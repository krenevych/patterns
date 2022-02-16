public class Main {
    public static void main(String[] args) {

        Director director = new Director();

        Car car = director.makeDefault();
        System.out.println(car);

        Car sportCar = director.makeSportCar();
        System.out.println(sportCar);

        Car suv = director.makeSUV();
        System.out.println(suv);
    }
}
