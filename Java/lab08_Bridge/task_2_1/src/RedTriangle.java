import java.awt.Color;
import java.awt.Graphics;

public class RedTriangle extends Triangle {

    public void draw(Graphics graphics) {
        graphics.setColor(Color.RED);
        super.draw(graphics);
    }

}
