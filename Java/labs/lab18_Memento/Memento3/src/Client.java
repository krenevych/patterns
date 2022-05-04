public class Client {


    public static void main(String[] args) {
        ConcreteOriginator originator = new ConcreteOriginator();
        Caretaker caretaker = new Caretaker();

        caretaker.pushMemento(originator.save());
        originator.setState("Hello");

        caretaker.pushMemento(originator.save());
        originator.setState(originator.getState() + ", ");

        caretaker.pushMemento(originator.save());
        originator.setState(originator.getState() + "World");

        caretaker.pushMemento(originator.save());
        originator.setState(originator.getState() + "!");

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
