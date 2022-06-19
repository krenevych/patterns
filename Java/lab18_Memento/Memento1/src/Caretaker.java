import java.util.Stack;

public class Caretaker {
    final private Originator originator;

    public Caretaker(Originator originator) {
        this.originator = originator;
    }

    Stack<Originator.Memento> history = new Stack<>();

    public void doSomething(String s){
        Originator.Memento memento = originator.save();
        history.push(memento);

        originator.setState(originator.getState() + s);
    }

    public void undo() {
        if (history.empty()){
            return;
        }

        Originator.Memento memento = history.pop();
        originator.restore(memento);
    }
}
