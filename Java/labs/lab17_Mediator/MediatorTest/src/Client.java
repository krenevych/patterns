public class Client {

    public static void main(String[] args) {

        ComponentA[] components = {
                new ComponentA("Component1"),
                new ComponentA("Component2"),
                new ComponentA("Component3"),
                new ComponentA("Component4"),
                new ComponentA("Component5"),
                new ComponentA("Component6")
        };

        ConcreteMediator mediator = new ConcreteMediator();

        for (ComponentA component : components) {
            component.setMediator(mediator);
            mediator.addComponent(component);
        }

        components[5].broadcastEvent();
    }

}
