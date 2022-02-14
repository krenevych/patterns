public class AdapterMicroUsbToTypeC_inharitance implements TypeCCharger, MicroUsbCharger {
    private final float voltage;
    private final float amperage;

    public AdapterMicroUsbToTypeC_inharitance(float voltage, float amperage) {
        this.voltage = voltage;
        this.amperage = amperage;
    }

    @Override
    public float getOutputVoltage() {
        return this.voltage;
    }

    @Override
    public float getOutputAmperage() {
        return this.amperage;
    }

    @Override
    public float getOutputPower() {
        return getOutputAmperage() * getOutputVoltage();
    }

}
