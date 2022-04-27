public class ComponentA implements Component {
    private Mediator mediator;
    final private String id;

    public ComponentA(String id) {
        this.id = id;
    }

    public void setMediator(Mediator mediator) {
        this.mediator = mediator;
    }

    @Override
    public void handleEvent() {
        System.out.println("handle event for component " + id);
    }

    @Override
    public void broadcastEvent() {
        mediator.broadcastEvent();
    }
}
