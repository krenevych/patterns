public class Engine {

    final private Type fuelType;
    final private int power;
    final private int torque;
    final private float volume;

    public Engine(Type fuelType, int power, int torque, float volume) {
        this.fuelType = fuelType;
        this.power = power;
        this.torque = torque;
        this.volume = volume;
    }

    enum Type {  // Тип двигуна
        petrol,  // Бензиновий
        diesel,  // Дзельний
        electric,// Електричний
        hybrid   // Гібридний
    }

    public Type getFuelType() {
        return fuelType;
    }

    public int getPower() {
        return power;
    }

    public int getTorque() {
        return torque;
    }

    public float getVolume() {
        return volume;
    }

    @Override
    public String toString() {
        return "Engine{" +
                "fuelType=" + fuelType +
                ", power=" + power +
                ", torque=" + torque +
                ", volume=" + volume +
                '}';
    }
}
