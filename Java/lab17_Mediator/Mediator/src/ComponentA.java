public class ComponentA implements Component {

    public ComponentA(String id) {
        this.id = id;
    }

    final private String id;
    private Mediator mediator;

    public void setMediator(Mediator mediator) {
        this.mediator = mediator;
    }

    @Override
    public void handleEvent() {
        System.out.println("handle event for component " + this.id);
    }

    @Override
    public void brodcastEvent() {
        mediator.brodcastEvent();
    }
}
