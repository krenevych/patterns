import java.awt.*;

public class GreenShapeColor implements ShapeColor {
    @Override
    public void setColor(Graphics graphics) {
        graphics.setColor(Color.GREEN);
    }
}
