public class CarFactory {
    public enum Type {
        AUDI,
        BMW,
        MAZDA,
    }

    public static Car create(Type type) {
        switch (type) {
            case AUDI -> {
                return new Audi();
            }
            case BMW -> {
                return new BMW();
            }
            case MAZDA -> {
                return new Mazda();
            }
            default -> throw new IllegalStateException("Unexpected value: " + type);
        }

    }

}
