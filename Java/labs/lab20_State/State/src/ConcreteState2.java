public class ConcreteState2 implements State {
    @Override
    public void doThis(Context context) {
        System.out.println("Concrete state 'do this': ConcreteState2 -> ConcreteState");
        context.changeState(new ConcreteState());
    }

    @Override
    public void doThat(Context context) {
        System.out.println("Concrete state 'do that': ConcreteState2 -> ConcreteState1");
        context.changeState(new ConcreteState1());
    }
}
