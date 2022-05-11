public class ConcreteStrategy2 implements Strategy {
    @Override
    public void execute(String data) {
        System.out.println("executing ConcreteStrategy2:");
        System.out.println(data);
    }
}
