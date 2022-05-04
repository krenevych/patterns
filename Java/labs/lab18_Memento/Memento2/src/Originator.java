public class Originator {
    private String state = "";

    public Memento save(){
        return new ConcreteMemento(state);
    }

    void restore(Memento memento){
        if (memento instanceof ConcreteMemento){
            state = ((ConcreteMemento)memento).getState();
        }
    }

    // Технічні методи встановлення та друкування стану
    public void printState() {
        System.out.println(state);
    }

    public void setState(String state) {
        this.state = state;
    }

    public String getState() {
        return state;
    }
}
