public interface Groceries {

  double getPrice();
  void accept(Visitor visitor);

}
