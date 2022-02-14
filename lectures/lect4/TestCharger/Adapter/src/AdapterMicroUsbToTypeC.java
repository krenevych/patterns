public class AdapterMicroUsbToTypeC implements TypeCCharger {

    private final MicroUsbCharger microUsbCharger;

    public AdapterMicroUsbToTypeC(MicroUsbCharger microUsbCharger) {
        this.microUsbCharger = microUsbCharger;
    }

    @Override
    public float getOutputPower() {
        return microUsbCharger.getOutputVoltage() * microUsbCharger.getOutputAmperage();
    }
}
