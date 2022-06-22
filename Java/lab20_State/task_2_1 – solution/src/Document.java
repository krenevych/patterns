public class Document {
    private State state; // ініціалізація якимось станом

    public Document() {
        state = new StateDraft();
    }

    public void setState(State state) {
        this.state = state;
    }

    public void publish(String user){
        state.publish(this, user);
    }

    public void abandon(String user){
        state.abandon(this, user);
    }

    // різні методи роботи з документом, що не
    // стосуються шаблону проектування Стан
    private String text = "";

    public String getText() {
        return text;
    }

    public void setText(String text) {
        this.text = text;
    }
}
