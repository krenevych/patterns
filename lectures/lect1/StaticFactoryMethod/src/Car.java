public class Car {
    private final String mark;
    private final int power;
    private final int maxSpeed;
    private final int weight;

    private Car(String mark, int power, int maxSpeed, int weight) {
        this.mark = mark;
        this.power = power;
        this.maxSpeed = maxSpeed;
        this.weight = weight;
    }

    /* Статичний фабричний метод  */
    public static Car createMazda(){
        return new Car("Mazda", 165, 198, 1500);
    }

    /* Статичний фабричний метод  */
    public static Car createWV(){
        return new Car("WV", 140, 179, 100);
    }

    @Override
    public String toString() {
        return "Car{" +
                "mark='" + mark + '\'' +
                ", power=" + power +
                ", maxSpeed=" + maxSpeed +
                ", weight=" + weight +
                '}';
    }
}
