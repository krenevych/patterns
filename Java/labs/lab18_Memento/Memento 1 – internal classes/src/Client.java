public class Client {


    public static void main(String[] args) {
        final Originator originator = new Originator();
        Caretaker caretaker = new Caretaker(originator);

        caretaker.doSomething("Hello");
        caretaker.doSomething(", ");
        caretaker.doSomething("World");
        caretaker.doSomething("!");
        originator.showState();

        caretaker.undo();
        originator.showState();
        caretaker.undo();
        originator.showState();
        caretaker.undo();
        originator.showState();

        caretaker.undo();
        originator.showState();
        caretaker.undo();
        originator.showState();
    }

}
