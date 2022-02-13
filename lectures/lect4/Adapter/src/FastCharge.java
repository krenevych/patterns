public class FastCharge implements TypeCCharger {

    private final float power;

    public FastCharge(float power) {
        this.power = power;
    }

    @Override
    public float getOutputPower() {
        return power;
    }
}
