package Lect_1_4.car;

public class Truck extends Car {
    public Truck(String mark, String color, String number) {
        super(mark, color, number);
    }

    void getCargo(){
        cargo = "My cargo";
    }
}
