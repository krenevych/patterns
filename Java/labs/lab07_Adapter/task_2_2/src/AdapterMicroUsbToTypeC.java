//import Legacy.Charger;

import com.mobile.Legacy.Charger;

public class AdapterMicroUsbToTypeC implements TypeCCharger {

    final private Charger charger;

    public AdapterMicroUsbToTypeC(Charger charger) {
        assert charger != null;
        this.charger = charger;
    }

    @Override
    public float getOutputPower() {
        return charger.getOutputAmperage() * charger.getOutputVoltage();
    }
}
