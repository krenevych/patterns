public abstract class AbstractClass {

    public void templateMethod(){  // Шаблонний метод
        step1();
        if (step2()){
            step3();
        }
        else {
            step4();
        }
    }

    public void step1(){  // метод з типовою реалізацією
        System.out.println("AbstractClass: step1");
    }

    abstract public boolean step2();  // абстрактний метод

    public void step3(){  // метод з типовою реалізацією
        System.out.println("AbstractClass: step3");
    }

    public void step4(){}  // хук-метод

}
