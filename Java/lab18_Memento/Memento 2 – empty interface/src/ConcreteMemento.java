public class ConcreteMemento implements Memento {
    final private String state;

    public String getState() {
        return state;
    }

    public ConcreteMemento(String state) {
        this.state = state;
    }
}
