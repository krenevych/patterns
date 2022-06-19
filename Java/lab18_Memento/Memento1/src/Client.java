public class Client {
    public static void main(String[] args) {
        Originator originator = new Originator();
        Caretaker caretaker = new Caretaker(originator);

        caretaker.doSomething("Hello");
        caretaker.doSomething(", ");
        caretaker.doSomething("World");
        caretaker.doSomething("!");

        originator.printState();

        caretaker.undo();
        originator.printState();

        caretaker.undo();
        originator.printState();

        caretaker.undo();
        originator.printState();

        caretaker.undo();
        originator.printState();

        caretaker.undo();
        originator.printState();

    }

}
