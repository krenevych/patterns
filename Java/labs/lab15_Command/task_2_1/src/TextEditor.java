public class TextEditor {
    public static void main(String[] args) {

        Document document = new Document("blank");

        Button saveButton = new Button();
        Button printButton = new Button();

        MenuItem saveMenuItem = new MenuItem();
        MenuItem printMenuItem = new MenuItem();
        MenuItem showInfoMenuItem = new MenuItem();

        Shortcut saveShortcut = new Shortcut();
        Shortcut printShortcut = new Shortcut();

        /////////////////////////////////////////////
        // Testing buttons, menu items, shortcuts...
        //////////////////////////////////////////////
        saveButton.click();
        printButton.click();

        saveMenuItem.select();
        printMenuItem.select();
        showInfoMenuItem.select();

        saveShortcut.press();
        printShortcut.press();
    }
}
