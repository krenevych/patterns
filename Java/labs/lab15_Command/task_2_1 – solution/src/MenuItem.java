public class MenuItem {
    public void select(){
        if (command != null)
            command.execute();
    }

    private Command command;

    public void setCommand(Command command) {
        this.command = command;
    }
}
