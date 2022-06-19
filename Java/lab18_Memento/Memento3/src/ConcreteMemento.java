public class ConcreteMemento implements Memento {

    final private ConcreteOriginator originator;
    final private String state;

    public ConcreteMemento(ConcreteOriginator originator, String state) {
        this.originator = originator;
        this.state = state;
    }

    @Override
    public void restore() {
        originator.setState(state);
    }
}
