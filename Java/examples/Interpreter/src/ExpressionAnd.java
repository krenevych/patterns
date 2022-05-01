public class ExpressionAnd implements Expression {

    final private Expression expression1;
    final private Expression expression2;

    public ExpressionAnd(Expression expression1, Expression expression2) {
        this.expression1 = expression1;
        this.expression2 = expression2;
    }

    @Override
    public boolean interpret(String context) {
        return expression1.interpret(context) && expression2.interpret(context);
    }
}
