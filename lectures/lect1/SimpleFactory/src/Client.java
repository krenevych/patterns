public class Client {
    public static void main(String[] args) {
        Car audi = CarFactory.create(CarFactory.Type.AUDI);
        Car bmw = CarFactory.create(CarFactory.Type.BMW);
        Car Mazda = CarFactory.create(CarFactory.Type.MAZDA);

        audi.run();
        bmw.run();
        Mazda.run();
    }
}
