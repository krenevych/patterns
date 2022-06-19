public class ConcreteStrategy3 implements Strategy {
    @Override
    public void execute(String data) {
        System.out.println("executing ConcreteStrategy3:");
        System.out.println(data);
    }
}
