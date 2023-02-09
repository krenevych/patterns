package Lect_5_Factories.SimpleFactory;

public class CarFactory {

    public Car create(String mark){
        String lowerCase = mark.toLowerCase();
        if (lowerCase.equals("bmw")){
            return new Bmw();
        } else if (lowerCase.equals("audi")) {
            return new Audi();
        } else {
            throw new RuntimeException("Unknown Lect_1_4.car type");
        }
    }

}
