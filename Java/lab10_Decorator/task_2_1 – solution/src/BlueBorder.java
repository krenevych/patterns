import java.awt.*;

public class BlueBorder extends ComponentDecorator{

    public BlueBorder(Component component) {
        super(component);
    }

    @Override
    public void draw(Graphics graphics) {
        Color color = graphics.getColor();
        graphics.setColor(Color.BLUE);
        component.draw(graphics);
        graphics.setColor(color);
    }
}
