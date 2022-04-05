import java.awt.*;

public class Circle implements Component {

    protected final int x;
    protected final int y;
    protected final int r;

    public Circle(int x, int y, int r) {
        this.x = x;
        this.y = y;
        this.r = r;
    }

    @Override
    public void draw(Graphics graphics) {
        graphics.drawOval(x - r, y - r, r, r);
    }
}
