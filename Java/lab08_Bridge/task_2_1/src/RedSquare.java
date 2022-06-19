import java.awt.Color;
import java.awt.Graphics;

public class RedSquare extends Square {

    public void draw(Graphics graphics) {
        graphics.setColor(Color.RED);
        super.draw(graphics);
    }

}
