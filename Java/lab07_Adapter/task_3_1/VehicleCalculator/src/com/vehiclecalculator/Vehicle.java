package com.vehiclecalculator;

public class Vehicle {

    private String model = "default";  // марка автомобіля
    private int age = 0;               // вік автомобіля в роках
    private int mileage = 0;           // пробіг автомобіля в милях
    private float damage = 0;          // ступінь пошкодження автомобіля: 0 - без пошкоджено,
                                       // 1 - максимальне пошкодження, не підлягає ремону

    public Vehicle(int age, String model, float damage, int mileage) {
        this.age = age;
        this.model = model;
        this.damage = damage;
        this.mileage = mileage;
    }

    public int getAge() {
        return age;
    }

    public String getModel() {
        return model;
    }

    public float getDamage() {
        return damage;
    }

    public int getMileage() {
        return mileage;
    }
}
