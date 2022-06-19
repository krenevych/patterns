public class ConcreteClass2 extends AbstractClass{
    @Override
    public void step1() {
        System.out.println("ConcreteClass2: step1");
    }

    @Override
    public boolean step2() {
        return true;
    }

    @Override
    public void step3() {
        System.out.println("ConcreteClass2: step3");
    }

    @Override
    public void step4() {
        super.step4();
    }
}
