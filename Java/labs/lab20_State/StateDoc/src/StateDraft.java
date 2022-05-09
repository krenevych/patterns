public class StateDraft implements State {
    @Override
    public void publish(Document document, String user) {
        System.out.println("Документ = " + document.getText());

        if ("admin".equals(user)){
            System.out.println("State : Draft -> Published");
            document.setState(new StatePublished());
        }
        else {
            System.out.println("State : Draft -> Moderation");
            document.setState(new StateModeration());
        }
    }

    @Override
    public void abandon(Document document, String user) {
        // Do nothing
    }
}
