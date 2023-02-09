package Lect_1_4.car;

public class Car implements Runnable{
    private String mark;
    private String color;

    private String number;

    protected String cargo;

    public Car(String mark, String color, String number) {
        this.mark = mark;
        this.color = color;
        this.number = number;
    }



    public void go(){
        System.out.printf("Автомобіль %s їде\n", mark);
    }

    @Override
    public void run() {
        go();
    }
}
