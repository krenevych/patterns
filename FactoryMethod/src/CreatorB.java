public class CreatorB extends Creator {
    @Override
    public Product create() {
        return new ProductB(mCounter++);
    }

//    private CreatorB() {
//        super();
//    }

    private static Creator mInstance;

    static public Creator getInstance() {
        if (mInstance == null) {
            mInstance = new CreatorB();
        }
        return mInstance;
    }
}
