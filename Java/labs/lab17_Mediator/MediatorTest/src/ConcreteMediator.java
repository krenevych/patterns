import java.util.ArrayList;
import java.util.List;

public class ConcreteMediator implements Mediator {

    List<Component> components = new ArrayList<>();

    void addComponent(Component component){
        components.add(component);
    }

    @Override
    public void broadcastEvent() {
        for (Component component : components) {
            component.handleEvent();
        }

    }
}
