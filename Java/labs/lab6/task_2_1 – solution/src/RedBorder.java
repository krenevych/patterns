import java.awt.*;

public class RedBorder extends ComponentDecorator{

    public RedBorder(Component component) {
        super(component);
    }

    @Override
    public void draw(Graphics graphics) {
        Color color = graphics.getColor();
        graphics.setColor(Color.RED);
        component.draw(graphics);
        graphics.setColor(color);
    }
}
