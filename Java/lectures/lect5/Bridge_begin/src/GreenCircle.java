import java.awt.Color;
import java.awt.Graphics;

public class GreenCircle extends Circle {

    public void draw(Graphics graphics) {
        graphics.setColor(Color.GREEN);
        super.draw(graphics);
    }

}
