package com.vehiclecalculator;

public class CarCalculator implements VehicleCalculator {

  public static int averageCarPrice = 6000;

  private final int age;
  private final String model;
  private final float damage;

  public CarCalculator(String model, int age, int damage) {
    this.model = model;
    this.age = age;
    this.damage = damage;
  }

  public int getRetailPrice() {
    switch (model) {
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
  public String calculatePrice() {
    int price = (int) (damage * Math.max(getRetailPrice() - (age * 100), 0));
    return price + "USD";
  }

}
