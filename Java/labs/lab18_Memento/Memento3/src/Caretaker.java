import java.util.Stack;

public class Caretaker {
    final private Stack<Memento> history = new Stack<>();

    public void undo(){
        Memento memento = history.pop();
        memento.restore();
    }

    public void pushMemento(Memento memento){
        history.push(memento);
    }
}
