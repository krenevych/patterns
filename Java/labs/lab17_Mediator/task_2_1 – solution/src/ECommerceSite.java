import java.util.HashMap;

public class ECommerceSite {

  private final HashMap<String, Integer> stock = new HashMap<>();

  public ECommerceSite() {
    stock.put("pens", 100);
    stock.put("pencils", 50);
    stock.put("erasers", 75);
  }

  public boolean checkInStock(String item, int quantity) {
    if (stock.containsKey(item) && stock.get(item) > quantity) {
      return true;
    } else {
      return false;
    }
  }

  public void sell(String item, int quantity) {

    int newQuantity = stock.get("pens") - quantity;
    stock.put(item, newQuantity);

  }



}
