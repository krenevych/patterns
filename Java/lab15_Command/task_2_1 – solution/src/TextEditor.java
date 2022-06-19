public class TextEditor {

    private Document document;

    final private Button saveButton;
    final private Button printButton;

    final private MenuItem saveMenuItem;
    final private MenuItem printMenuItem;
    final private MenuItem showInfoMenuItem;

    final private Shortcut saveShortcut;
    final private Shortcut printShortcut;

    public TextEditor() {
        saveButton = new Button();
        saveButton.setCommand(saveDocument);
        printButton = new Button();
        printButton.setCommand(printDocument);

        saveMenuItem = new MenuItem();
        saveMenuItem.setCommand(saveDocument);
        printMenuItem = new MenuItem();
        printMenuItem.setCommand(printDocument);
        showInfoMenuItem = new MenuItem();
        showInfoMenuItem.setCommand(showInfo);

        saveShortcut = new Shortcut();
        saveShortcut.setCommand(saveDocument);
        printShortcut = new Shortcut();
        printShortcut.setCommand(printDocument);
    }

    final private Command saveDocument = new Command() {
        @Override
        public void execute() {
            if (document != null){
                document.save();
            }
        }
    };

    final private Command printDocument = new Command() {
        @Override
        public void execute() {
            if (document != null){
                document.print();
            }
        }
    };

    final private Command showInfo = new Command() {
        @Override
        public void execute() {
            if (document != null){
                document.showInfo();
            }
        }
    };

    public void newDocument(String name) {
        document = new Document(name);
    }

    public void clickSaveButton() {
        saveButton.click();
    }

    public void clickPrintButton() {
        printButton.click();
    }

    public void selectSaveMenuItem() {
        saveMenuItem.select();
    }

    public void selectPrintMenuItem() {
        printMenuItem.select();
    }

    public void selectShowInfoMenuItem() {
        showInfoMenuItem.select();
    }

    public void pressSaveShortcut() {
        saveShortcut.press();
    }

    public void pressPrintShortcut() {
        printShortcut.press();
    }
}
