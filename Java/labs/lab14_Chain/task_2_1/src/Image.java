import java.text.SimpleDateFormat;
import java.util.Date;

public class Image {
    public enum Type {
        bmp,
        png,
        jpg
    }

    private Type type;
    private String creationDate;
    private String creationTime;
    private String name;

    public Type getType() {
        return type;
    }

    public void setType(Type type) {
        this.type = type;
    }


    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }


    public String getCreationDate() {
        return creationDate;
    }

    public void setCreationDate() {
        this.creationDate = new SimpleDateFormat("yyyyMMDD").format(new Date());
    }

    public String getCreationTime() {
        return creationTime;
    }

    public void setCreationTime(String creationTime) {
        this.creationDate = new SimpleDateFormat("HHmmss").format(new Date());
    }





}
