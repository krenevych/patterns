public class SUV extends Car {

    private final boolean isAWD;

    public SUV(String mark, int power, int torque, boolean isAWD) {
        super(mark, power, torque);
        this.isAWD = isAWD;
    }

    public SUV(SUV other) {
        super(other);
        this.isAWD = other.isAWD;
    }

    @Override
    public Car clone() {
        return new SUV(this);
    }

    @Override
    public String toString() {
        return "SUV{" +
                super.toString() +
                "isAWD=" + isAWD +
                '}';
    }
}
