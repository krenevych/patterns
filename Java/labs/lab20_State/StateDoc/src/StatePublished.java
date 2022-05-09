public class StatePublished implements State {
    @Override
    public void publish(Document document, String user) {
        // Do nothing
    }

    @Override
    public void abandon(Document document, String user) {
        System.out.println("Документ = " + document.getText());
        System.out.println("State : Published -> Draft");
        document.setState(new StateDraft());
    }
}
