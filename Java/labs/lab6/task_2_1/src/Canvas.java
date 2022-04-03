import javax.swing.*;
import java.awt.*;

public class Canvas extends JPanel {

    private Circle circle1;
    private Circle circle2;
    private Circle circle3;

    public Canvas() {
        circle1 = new Circle(60, 60, 50);
        circle2 = new Circle(120, 60, 50);
        circle3 = new Circle(180, 60, 50);
    }

    @Override
    public void paint(Graphics graphics) {
        circle1.draw(graphics);
        circle2.draw(graphics);
        circle3.draw(graphics);
    }

}
