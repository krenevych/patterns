import java.util.Stack;

public class Caretaker {

    final private Originator originator;
    final private Stack<Memento> history = new Stack<>();

    public Caretaker(Originator originator) {
        this.originator = originator;

    }

    public void undo() {
        if (history.empty()){
            return;
        }

        Memento memento = history.pop();
        originator.restore(memento);
    }

    public void doSomething(String state) {
        Memento memento = originator.save();
        history.push(memento);

        originator.update(originator.getState() + state);
    }

}
