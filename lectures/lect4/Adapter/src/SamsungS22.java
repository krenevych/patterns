public class SamsungS22 {

    private int chargingPercent = 0;
    private TypeCCharger charger = null;

    public int getChargingPercent() {
        return chargingPercent;
    }

    public void makeCall() {
        if (chargingPercent > 5) {
            System.out.println("Calling...");
            chargingPercent -= 5;
        } else {
            System.out.println("To make a call, please charge the phone!");
        }
    }

    public void pluginCharger(TypeCCharger charger) {
        this.charger = charger;
        System.out.println("plugin charger!");
    }

    public void unplugCharger() {
        System.out.println("unplug charger!");
        this.charger = null;
    }

    public void charge(int time) {
        if (charger == null) {
            System.out.println("Plugin micro usb charger");
            return;
        }

        float timeH = time / 9.0f;
        int percent = chargingPercent + (int) (charger.getOutputPower() * timeH);
        chargingPercent = Math.min(percent, 100);
    }
}
