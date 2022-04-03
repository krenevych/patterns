import javax.swing.*;
import java.awt.*;

public class Main extends JPanel {

    private final Component circle1 = new Circle(60, 60, 50);
    private final Component circle2 = new Circle(120, 60, 50);
    private final Component circle3 = new Circle(180, 60, 50);

    public static void main(String[] args) {
        JFrame frame = new JFrame();
        frame.setSize(400, 400);
        frame.add(new Main());
        frame.setVisible(true);
    }

    @Override
    public void paint(Graphics graphics) {
        circle1.draw(graphics);
        circle2.draw(graphics);
        circle3.draw(graphics);
    }
}
