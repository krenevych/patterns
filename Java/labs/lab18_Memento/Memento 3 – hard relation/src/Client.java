public class Client {


    public static void main(String[] args) {
        final ConcreteOriginator originator = new ConcreteOriginator();
        Caretaker caretaker = new Caretaker();

        caretaker.store(originator.save());
        originator.setState("Hello");
        caretaker.store(originator.save());
        originator.setState(originator.getState() + ", ");
        caretaker.store(originator.save());
        originator.setState(originator.getState() + "World");
        caretaker.store(originator.save());
        originator.setState(originator.getState() + "!");

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
