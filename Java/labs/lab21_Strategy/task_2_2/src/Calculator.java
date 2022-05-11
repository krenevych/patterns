public class Calculator {
    public int add(int a, int b){
        int res = a + b;
        System.out.printf("%s + %s = %s%n", a, b, res);
        return res;
    }
    public int subtract(int a, int b){
        int res = a - b;
        System.out.printf("%s - %s = %s%n", a, b, res);
        return res;
    }
    public int multiply(int a, int b){
        int res = a * b;
        System.out.printf("%s * %s = %s%n", a, b, res);
        return res;
    }
}
