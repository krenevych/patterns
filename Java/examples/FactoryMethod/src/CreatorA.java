public class CreatorA extends Creator {
    @Override
    public Product create() {
        return new ProductA(mCounter++);
    }

// private CreatorA() {
//     super();
// }

    private static Creator mInstance;
    static public Creator getInstance() {
        if (mInstance == null) {
            mInstance = new CreatorA();
        }
        return mInstance;
    }
}
