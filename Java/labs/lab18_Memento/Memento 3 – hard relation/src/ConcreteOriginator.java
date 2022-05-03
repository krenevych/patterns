public class ConcreteOriginator implements Originator{

    private String state = "";

    public void setState(String state) {
        this.state = state;
    }

    public String getState() {
        return state;
    }

    public void showState() {
        System.out.println(state);
    }

    @Override
    public Memento save() {
        return new ConcreteMemento(this, state);
    }
}
