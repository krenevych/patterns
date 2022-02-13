package com.vehiclecalculator;

public class CarCalculator implements VehicleCalculator {

    public static int averageCarPrice = 6000;
    private Vehicle vehicle;


    public CarCalculator() {
    }

    public int getRetailPrice() {
        assert vehicle != null;

        switch (vehicle.getModel()) {
            case "Ford":
                return 3000;
            case "Audi":
                return 5000;
            case "BMW":
                return 7000;
            case "Tesla":
                return 10000;
            default:
                return averageCarPrice;
        }
    }

    @Override
    public void setVehicle(Vehicle vehicle) {
        this.vehicle = vehicle;
    }

    @Override
    public String calculatePrice() {
        assert vehicle != null;
        int price = (int) (vehicle.getDamage() * Math.max(getRetailPrice() - (vehicle.getAge() * 100), 0));
        return price + "USD";
    }

}
