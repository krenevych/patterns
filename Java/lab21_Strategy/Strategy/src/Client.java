public class Client {

    public static void main(String[] args) {
        Context context = new Context();

        context.doSomething();

        context.setStrategy(new ConcreteStrategy1());
        context.doSomething();

        context.setStrategy(new ConcreteStrategy2());
        context.doSomething();

        context.setStrategy(new ConcreteStrategy3());
        context.doSomething();

        context.setStrategy(null);
        context.doSomething();

    }

}
