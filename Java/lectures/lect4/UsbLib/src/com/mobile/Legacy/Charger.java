package com.mobile.Legacy;

public class Charger implements MicroUsbCharger {

    final private float voltage;
    final private float amperage;

    public Charger(float voltage, float amperage) {
        this.voltage = voltage;
        this.amperage = amperage;
    }

    @Override
    public float getOutputVoltage() {
        return voltage;
    }

    @Override
    public float getOutputAmperage() {
        return amperage;
    }
}
