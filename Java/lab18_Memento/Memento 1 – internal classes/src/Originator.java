public class Originator {

    public static class Memento {
        final private String state;
        public Memento(String state) {
            this.state = state;
        }
    }

    private String state = "";

    public Memento save() {
        return new Memento(state);
    }

    public void restore(Memento memento) {
        state = memento.state;
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
