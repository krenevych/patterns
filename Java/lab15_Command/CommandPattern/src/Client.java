public class Client {
    public static void main(String[] args) {

        Invoker invoker = new Invoker();
        Receiver receiver = new Receiver();

        Command command = new Command() {
            @Override
            public void execute() {
                receiver.action();
            }
        };

        Invoker invoker1 = new Invoker();
        invoker1.setCommand(command);

        invoker.setCommand(command);

        ////////////////////////
        invoker.executeCommand();
        invoker1.executeCommand();

    }

}
