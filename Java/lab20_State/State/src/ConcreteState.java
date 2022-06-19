public class ConcreteState implements State {

    public ConcreteState() {
    }

    @Override
    public void doThis(Context context) {
        System.out.println("Concrete state 'do this': ConcreteState -> ConcreteState1");
        context.changeState(new ConcreteState1());

    }

    @Override
    public void doThat(Context context) {
        System.out.println("Concrete state 'do that': ConcreteState -> ConcreteState2");
        context.changeState(new ConcreteState2());
    }
}
