import java.util.Random;

public class Request {
    enum Type {
        TYPE1,
        TYPE2,
        TYPE3,
        TYPE4,
    }

    public Type getType() {
        return type;
    }

    private final Type type;
    private final long id;

    public Request(Type type) {
        this.type = type;
        Random random = new Random();
        id = random.nextInt();
    }

    @Override
    public String toString() {
        return "Request{" +
                "type=" + type +
                ", id=" + id +
                '}';
    }
}
