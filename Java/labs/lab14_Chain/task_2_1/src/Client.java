import java.text.SimpleDateFormat;
import java.util.Date;

public class Client {
    public static void main(String[] args) {

        String s = new SimpleDateFormat("yyyy_MM_dd_HH:mm:ss").format(new Date());
        System.out.println(s);

    }
}
