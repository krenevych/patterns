package com.vehiclecalculator;

public class TruckCalculator implements VehicleCalculator {

    public static int averagePrice = 10000;
    private Vehicle vehicle;

    public TruckCalculator() {
    }

    @Override
    public void setVehicle(Vehicle vehicle) {
        this.vehicle = vehicle;
    }

    @Override
    public String calculatePrice() {
        int price = Math.max(averagePrice - vehicle.getAge() * 100 - vehicle.getMileage() / 100, 0);
        return price + "USD";
    }

}
