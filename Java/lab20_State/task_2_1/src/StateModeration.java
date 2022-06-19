public class StateModeration implements State {
    @Override
    public void publish(Document document, String user) {
        System.out.println("Документ = " + document.getText());
        System.out.println("State : Moderation -> Published");
        document.setState(new StatePublished());
    }

    @Override
    public void abandon(Document document, String user) {
        System.out.println("Документ = " + document.getText());
        System.out.println("State : Moderation -> Draft");
        document.setState(new StateDraft());
    }
}
