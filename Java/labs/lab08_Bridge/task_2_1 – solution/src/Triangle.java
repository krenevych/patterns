import java.awt.Graphics;

public class Triangle extends Shape {

    public Triangle(ShapeColor shapeColor) {
        super(shapeColor);
    }

    public void draw(Graphics graphics) {
        super.draw(graphics);

        int[] x = {200, 250, 150};
        int[] y = {15, 65, 65};
        int n = 3;
        graphics.fillPolygon(x, y, n);
    }

}
