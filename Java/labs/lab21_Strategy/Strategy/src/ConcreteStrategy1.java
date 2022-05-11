public class ConcreteStrategy1 implements Strategy {
    @Override
    public void execute(String data) {
        System.out.println("executing ConcreteStrategy1:");
        System.out.println(data);
    }
}
