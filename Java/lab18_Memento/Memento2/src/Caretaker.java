import java.util.Stack;

public class Caretaker {
    final private Originator originator;

    public Caretaker(Originator originator) {
        this.originator = originator;
    }

    Stack<Memento> history = new Stack<>();

    public void doSomething(String s){
        Memento memento = originator.save();
        history.push(memento);

        originator.setState(originator.getState() + s);
    }

    public void undo() {
        if (history.empty()){
            return;
        }

        Memento memento = history.pop();
        originator.restore(memento);
    }
}
