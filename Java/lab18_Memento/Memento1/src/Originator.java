public class Originator {
    private String state = "";

    public static class Memento {
        final private String state;

        public Memento(String state) {
            this.state = state;
        }
    }

    public Memento save(){
        return new Memento(state);
    }

    void restore(Memento memento){
        state = memento.state;
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
