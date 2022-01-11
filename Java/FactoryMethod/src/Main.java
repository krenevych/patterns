public class Main {
    public static void main(String[] args) {

        CreatorA creatorA = new CreatorA();
        CreatorB creatorB = new CreatorB();

        creatorA.create().showInfo();
        creatorB.create().showInfo();
        creatorB.create().showInfo();
        creatorA.create().showInfo();
        creatorA.create().showInfo();
        creatorB.create().showInfo();




//        Product productA = CreatorA.getInstance().create();
//        productA.showInfo();
//
//        Product productB = CreatorB.getInstance().create();
//        productB.showInfo();
//
//        productA = CreatorA.getInstance().create();
//        productA.showInfo();
//
//
//        productB = CreatorB.getInstance().create();
//        productB.showInfo();
//
//        productB = CreatorB.getInstance().create();
//        productB.showInfo();

        
    }

}
