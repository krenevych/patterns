import java.awt.Graphics;

public class Square extends Shape {

    public Square(ShapeColor shapeColor) {
        super(shapeColor);
    }

    public void draw(Graphics graphics) {
        super.draw(graphics);
        graphics.fillRect(5, 15, 50, 50);
    }

}
