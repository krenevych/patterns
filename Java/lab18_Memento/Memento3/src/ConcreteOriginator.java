public class ConcreteOriginator implements Originator {

    private String state = "";

    @Override
    public Memento save() {
        return new ConcreteMemento(this, state);
    }

    public void setState(String state) {
        this.state = state;
    }

    // Технічні методи встановлення та друкування стану
    public void printState() {
        System.out.println(state);
    }

    public String getState() {
        return state;
    }
}
