import javax.swing.*;

public class Main  {

    public static void main(String[] args) {
        JFrame frame = new JFrame();
        frame.setSize(400, 400);
        frame.add(new Canvas());
        frame.setVisible(true);
    }

}
