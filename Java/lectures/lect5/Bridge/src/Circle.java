import java.awt.Graphics;

public class Circle extends Shape {

    public Circle(ShapeColor shapeColor) {
        super(shapeColor);
    }

    public void draw(Graphics graphics) {
        super.draw(graphics);
        graphics.fillOval(75, 15, 50, 50);
    }

}
