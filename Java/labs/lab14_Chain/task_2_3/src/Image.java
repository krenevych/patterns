import java.text.SimpleDateFormat;
import java.util.Date;

public class Image {

    public enum Type {
        bmp,
        png,
        jpg
    }

    private Type type;
    private String camera;
    private String creationDate;
    private String creationTime;
    private String name;

    public Type getType() {
        return type;
    }

    public void setType(Type type) {
        this.type = type;
    }

    public String getCamera() {
        return camera;
    }

    public void setCamera(String camera) {
        this.camera = camera;
    }

    public void setCreationDate(String creationDate) {
        this.creationDate = creationDate;
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
        this.creationDate = new SimpleDateFormat("yyyyMMdd").format(new Date());
    }

    public String getCreationTime() {
        return creationTime;
    }

    public void setCreationTime() {
        this.creationTime = new SimpleDateFormat("HHmmss").format(new Date());
    }

    @Override
    public String toString() {
        return "Image{" +
                "type=" + type +
                ", camera='" + camera + '\'' +
                ", creationDate='" + creationDate + '\'' +
                ", creationTime='" + creationTime + '\'' +
                ", name='" + name + '\'' +
                '}';
    }
}
