import java.awt.*;

public class RedShapeColor implements ShapeColor {
    @Override
    public void setColor(Graphics graphics) {
        graphics.setColor(Color.RED);
    }
}
