import java.awt.*;

public abstract class ComponentDecorator implements Component {

    public ComponentDecorator(Component component) {
        this.component = component;
    }

    protected final Component component;
}
