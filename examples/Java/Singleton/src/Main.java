public class Main {

    static {
        System.out.println("static Main before");
    }

    public static void main(String[] args){

        Singleton.getInstance().setData("12341234");
        System.out.println(Singleton.getInstance());

        SinletonL.getInstance().setData("SSSSS");
        System.out.println(SinletonL.getInstance());
    }

    static {
        System.out.println("static Main after");
    }

}
