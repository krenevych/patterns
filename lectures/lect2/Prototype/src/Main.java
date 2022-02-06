public class Main {
    public static void main(String[] args) {
        Car mazda5 = new Car("Mazda 5", 150, 208);
        System.out.println(mazda5);

        Car mazda5_clone = mazda5.clone();
        System.out.println(mazda5_clone);

        SUV mazda_cx5 = new SUV("Mazda CX5", 150, 208, false);
        System.out.println(mazda_cx5);

        SUV mazda_cx5_clone = (SUV) mazda_cx5.clone();
        System.out.println(mazda_cx5_clone);
    }
}
