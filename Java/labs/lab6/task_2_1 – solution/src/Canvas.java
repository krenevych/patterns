import javax.swing.*;
import java.awt.*;

public class Canvas extends JPanel {

    private Component circle1;
    private Component circle2;
    private Component circle3;

    public Canvas() {
        circle1 = new Circle(60, 60, 50);
        circle1 = new BlueBorder(circle1);
        
        circle2 = new Circle(120, 60, 50);
        circle2 = new RedBorder(circle2);

        circle3 = new Circle(180, 60, 50);
        circle3 = new YelowBorder(circle3);
    }

    @Override
    public void paint(Graphics graphics) {
        circle1.draw(graphics);
        circle2.draw(graphics);
        circle3.draw(graphics);
    }

}
