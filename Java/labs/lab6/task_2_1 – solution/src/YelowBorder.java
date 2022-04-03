import java.awt.*;

public class YelowBorder extends ComponentDecorator{

    public YelowBorder(Component component) {
        super(component);
    }

    @Override
    public void draw(Graphics graphics) {
        Color color = graphics.getColor();
        graphics.setColor(Color.YELLOW);
        component.draw(graphics);
        graphics.setColor(color);
    }
}
