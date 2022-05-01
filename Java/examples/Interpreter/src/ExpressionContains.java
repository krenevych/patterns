
public class ExpressionContains implements Expression {
    final private String data;

    public ExpressionContains(String data) {
        this.data = data.toLowerCase();
    }

    @Override
    public boolean interpret(String context) {
        return context.toLowerCase().contains(data);
    }
}
