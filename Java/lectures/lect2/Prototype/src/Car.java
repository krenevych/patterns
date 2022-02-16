public class Car implements Cloneable {
    final private String mark;
    final private int power;
    final private int torque;

    public Car(String mark, int power, int torque) {
        this.mark = mark;
        this.power = power;
        this.torque = torque;
    }

    public Car(Car other) {
        this.mark = other.mark;
        this.power = other.power;
        this.torque = other.torque;
    }

    @Override
    public String toString() {
        return "Car{" +
                "mark='" + mark + '\'' +
                ", power=" + power +
                ", torque=" + torque +
                '}';
    }

    @Override
    public Car clone() {
        return new Car(this);
    }
}
