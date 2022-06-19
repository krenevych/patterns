import java.awt.Graphics;
import javax.swing.JFrame;
import javax.swing.JPanel;

public class Canvas extends JPanel {

    public static void main(String[] a) {
        // Creates a canvas to draw on
        JFrame frame = new JFrame();
        frame.setSize(400, 400);
        frame.add(new Canvas());
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
    }

    @Override
    public void paint(Graphics graphics) {
        Square square = new BlueSquare();
        square.draw(graphics);
        Circle circle = new RedCircle();
        circle.draw(graphics);
        Triangle triangle = new GreenTriangle();
        triangle.draw(graphics);
    }

}
