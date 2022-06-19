import java.util.Stack;

public class Caretaker {

    final private Stack<Memento> history = new Stack<>();

    public void undo() {
        if (history.empty()){
            return;
        }

        Memento memento = history.pop();
        memento.restore();
    }

    public void store(Memento memento) {
        history.push(memento);
    }

}
