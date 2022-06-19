import java.util.ArrayList;

public class BookCollection implements Readable {

  private final ArrayList<Readable> children = new ArrayList<>();

  public ArrayList<Readable> getChildren() {
    return children;
  }

  public void add(Readable readable) {
    children.add(readable);
  }

  public void remove(Readable readable){
    children.remove(readable);
  }


  @Override
  public void checkout() {
    for (Readable child : children) {
      child.checkout();
    }
  }

  @Override
  public void returnBook() {
    for (Readable child : children) {
      child.returnBook();
    }

  }
}
