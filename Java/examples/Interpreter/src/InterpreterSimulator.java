
public class InterpreterSimulator {

    public static void main(String[] args) {

        Expression expressionJava = new ExpressionContains("Java");
        Expression expressionUkr = new ExpressionContains("Ukrainian");
        Expression expression = new ExpressionAnd(expressionJava, expressionUkr);

        System.out.println(expression.interpret("Ukrainian developers are best of the best java developers in the world"));
    }
}
