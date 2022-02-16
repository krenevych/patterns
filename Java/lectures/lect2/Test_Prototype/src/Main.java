public class Main {
    public static void main(String[] args) {
        Car mazda5 = new Car("Grey", 150, 208, 2.0f);
        System.out.println(mazda5);
//        Car mazda5_clone = new Car(mazda5);
        Car mazda5_clone = mazda5.clone();
        System.out.println(mazda5_clone);

        CarWithType mazda3
                = new CarWithType(
                        mazda5, "Hetchback");

        CarWithType mazda3_clone1 = new CarWithType(mazda3);
        Car mazda3_clone = mazda3.clone();
        CarWithType mazda3_clone2 = (CarWithType) mazda3_clone;

    }
}
