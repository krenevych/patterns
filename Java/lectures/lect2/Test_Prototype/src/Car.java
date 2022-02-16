public class Car implements Cloneable{
    private final String color;
    private final int power;
    private final int torque;
    private final float volume;

    public Car(String color, int power, int torque, float volume) {
        this.color = color;
        this.power = power;
        this.torque = torque;
        this.volume = volume;
    }

    public Car(Car other){
        this.color = other.color;
        this.power = other.power;
        this.torque = other.torque;
        this.volume = other.volume;
    }

    @Override
    public String toString() {
        return "Car{" +
                "color='" + color + '\'' +
                ", power=" + power +
                ", torque=" + torque +
                ", volume=" + volume +
                '}';
    }

    @Override
    public Car clone() {
//        return new Car(color, power, torque, volume);
        return new Car(this);
    }
}
