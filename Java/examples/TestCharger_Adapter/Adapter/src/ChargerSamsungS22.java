public class ChargerSamsungS22 implements TypeCCharger {

    public ChargerSamsungS22(float power) {
        this.power = power;
    }

    private final float power;

    @Override
    public float getOutputPower() {
        return power;
    }
}
