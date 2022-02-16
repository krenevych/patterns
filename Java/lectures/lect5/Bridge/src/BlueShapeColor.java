import java.awt.*;

public class BlueShapeColor implements ShapeColor {
    @Override
    public void setColor(Graphics graphics) {
        graphics.setColor(Color.BLUE);
    }
}
