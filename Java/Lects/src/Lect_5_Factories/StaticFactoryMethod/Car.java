package Lect_5_Factories.StaticFactoryMethod;

public class Car {
    private static int current_vin = 0;

    final private String mark;
    final private int vin;

    public static Car create(String mark){
        return new Car(mark, current_vin++);
    }

    private Car(String mark, int vin) {
        this.mark = mark;
        this.vin = vin;
    }

    @Override
    public String toString() {
        return "Car{" +
                "mark='" + mark + '\'' +
                ", vin=" + vin +
                '}';
    }
}
