public class Button {

    public void click() {
        if (command != null)
            command.execute();
    }

    private Command command;

    public void setCommand(Command command) {
        this.command = command;
    }
}
