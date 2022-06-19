public class Client {

    public static void main(String[] args) {
        ConcreteState state = new ConcreteState();
        Context context = new Context(state);

        context.doThis();
        context.doThis();
        context.doThat();
        context.doThis();
        context.doThat();
        context.doThat();
    }

}
