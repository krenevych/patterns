public class VolvoBus extends Bus {
    public VolvoBus() {
        super(6000000, 20);
    }

    @Override
    public void goByWay() {
        System.out.println("Volvo Bus runs!");
    }
}
