public class AdapterTypeCToMicroUsb implements MicroUsbCharger{

    public AdapterTypeCToMicroUsb(TypeCCharger charger) {
        this.charger = charger;
    }

    private final TypeCCharger charger;

    @Override
    public float getOutputVoltage() {
        return 5.0f;
    }

    @Override
    public float getOutputAmperage() {
        return Math.min(charger.getOutputPower() / getOutputVoltage(), 1.5f);
    }
}
