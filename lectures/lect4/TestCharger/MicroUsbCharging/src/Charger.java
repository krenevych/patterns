public class Charger implements MicroUsbCharger {

    public Charger(float voltage, float amperage) {
        this.voltage = voltage;
        this.amperage = amperage;
    }

    final private float voltage;
    final private float amperage;

    @Override
    public float getOutputVoltage() {
        return voltage;
    }

    @Override
    public float getOutputAmperage() {
        return amperage;
    }
}
