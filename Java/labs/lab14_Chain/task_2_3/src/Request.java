public class Request {
    public Request(Type type) {
        this.type = type;
    }

    enum Type {
        Type1,
        Type2,
        Type3,
        Type4,
        Type5,
        Type6,
    }

    private final Type type;

    public Type getType() {
        return type;
    }

}
