package Lect_5_Factories.CreatioalMethod;

public class Car {

    final private String mark;
    final private int vin;

    public Car(String mark) {
        this.mark = mark;
        this.vin = 0;
    }

    private Car(String mark, int vin) {
        this.mark = mark;
        this.vin = vin;
    }

    public Car createBMV(){
        return new Car("BMV", this.vin + 1);
    }

    public Car createAUDI(){
        return new Car("AUDI", this.vin + 1);
    }


    @Override
    public String toString() {
        return "Car{" +
                "mark='" + mark + '\'' +
                ", vin=" + vin +
                '}';
    }
}
