package com.vehiclecalculator;

public class TruckCalculator implements VehicleCalculator {

    private final int age;
    private final int mileage;
    public static int averagePrice = 10000;

    public TruckCalculator(int age, int mileage) {
        this.age = age;
        this.mileage = mileage;
    }

    @Override
    public String calculatePrice() {
        int price = Math.max(averagePrice - age * 100 - mileage / 100, 0);
        return price + "USD";
    }

}
