import java.text.SimpleDateFormat;
import java.util.Date;

public class PropertyHandlerDateTime extends PropertyHandler {

    @Override
    public void setProperty(Image image) {
        String time = new SimpleDateFormat("HHmmss").format(new Date());
        String date = new SimpleDateFormat("yyyyMMdd").format(new Date());

        image.setCreationTime(time);
        image.setCreationDate(date);

        super.setProperty(image);
    }
}
