public class Client {

    public static void main(String[] args) {

        ComponentA[] components = {
                new ComponentA("component 1"),
                new ComponentA("component 2"),
                new ComponentA("component 3"),
                new ComponentA("component 4"),
                new ComponentA("component 5"),
        };
        ConcreteMediator mediator = new ConcreteMediator();

        for (ComponentA component : components) {
            mediator.addComponent(component);
            component.setMediator(mediator);
        }

        components[3].brodcastEvent();

    }

}
