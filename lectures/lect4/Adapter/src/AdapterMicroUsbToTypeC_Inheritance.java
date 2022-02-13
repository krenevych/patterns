import com.mobile.Legacy.Charger;

public class AdapterMicroUsbToTypeC_Inheritance extends Charger implements TypeCCharger {

    public AdapterMicroUsbToTypeC_Inheritance(float voltage, float amperage) {
        super(voltage, amperage);
    }

    @Override
    public float getOutputPower() {
        return getOutputAmperage() * getOutputVoltage();
    }

}
