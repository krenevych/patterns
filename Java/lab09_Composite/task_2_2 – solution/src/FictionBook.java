public class FictionBook extends Book {

  boolean isAPlay;

  public FictionBook(String name, boolean isAPlay) {
    super(name, false);
    this.isAPlay = isAPlay;
  }


}
