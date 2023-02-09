package Lect_5_Factories.SimpleFactory;

public class Car {
    final private String mark;

    public Car(String mark) {
        this.mark = mark;
    }

    @Override
    public String toString() {
        return "Car{" +
                "mark='" + mark + '\'' +
                '}';
    }
}
