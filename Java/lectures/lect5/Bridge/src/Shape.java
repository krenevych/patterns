import java.awt.Graphics;

public abstract class Shape {

    private final ShapeColor shapeColor;

    public Shape(ShapeColor shapeColor) {
        this.shapeColor = shapeColor;
    }

    public void draw(Graphics graphics){
        shapeColor.setColor(graphics);
    }

}
