public class AdapterMicroUsbToTypeC_inharitance  extends Charger implements TypeCCharger {

    public AdapterMicroUsbToTypeC_inharitance(float voltage, float amperage) {
        super(voltage, amperage);
    }

    @Override
    public float getOutputPower() {
        return getOutputAmperage() * getOutputVoltage();
    }

}
