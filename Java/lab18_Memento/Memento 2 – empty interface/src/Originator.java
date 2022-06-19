public class Originator {

    private String state = "";

    public Memento save() {
        return new ConcreteMemento(state);
    }

    public void restore(Memento memento) {
        state = ((ConcreteMemento)memento).getState();
    }

    public void update(String newState) {
        this.state = newState;
    }

    public String getState() {
        return state;
    }

    public void showState() {
        System.out.println(state);
    }

}
