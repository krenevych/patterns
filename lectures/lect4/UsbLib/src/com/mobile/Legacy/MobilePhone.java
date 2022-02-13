package com.mobile.Legacy;

public class MobilePhone {
    private int chargingPercent = 0;
    private MicroUsbCharger charger = null;

    public void pluginCharger(MicroUsbCharger charger) {
        this.charger = charger;
        System.out.println("plugin micro usb charger!");
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
        float power = charger.getOutputAmperage() * charger.getOutputVoltage();
        int percent = chargingPercent + (int) (power * timeH);
        chargingPercent = Math.min(percent, 100);
    }

    public void call(float time){
        if (chargingPercent < time){
            System.out.println("Charge mobile phone!");
            return;
        }

        chargingPercent += time;
        System.out.println("Calling...");
    }

    public int getChargingPercent() {
        return chargingPercent;
    }
}
