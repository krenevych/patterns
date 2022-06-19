import java.awt.*;

public class Circle {

    private final int x;
    private final int y;
    private final int r;

    public Circle(int x, int y, int r) {
        this.x = x;
        this.y = y;
        this.r = r;
    }

    public void draw(Graphics graphics) {
        graphics.drawOval(x - r, y - r, r, r);
    }
}
