public class ConcreteState1 implements State {

    public ConcreteState1() {
    }

    @Override
    public void doThis(Context context) {
        System.out.println("Concrete state 'do this': ConcreteState1 -> ConcreteState2");
        context.changeState(new ConcreteState2());

    }

    @Override
    public void doThat(Context context) {
        System.out.println("Concrete state 'do that': ConcreteState1 -> ConcreteState");
        context.changeState(new ConcreteState());
    }
}
