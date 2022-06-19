public class LibraryClient {

  public static void main(String[] args) {

    NonfictionBook nonfictionBook = new NonfictionBook("A Brief History of Time");
    FictionBook fictionBookOne = new FictionBook("Hamlet", true);
    FictionBook fictionBookTwo = new FictionBook("The Great Gatsby", false);

    BookCollection bookCollection = new BookCollection();
    bookCollection.add(nonfictionBook);
    bookCollection.add(fictionBookOne);
    bookCollection.add(fictionBookTwo);

    checkoutReadable(nonfictionBook);
    checkoutReadable(fictionBookOne);
    checkoutReadable(bookCollection);

    returnReadable(nonfictionBook);
    returnReadable(fictionBookOne);
    returnReadable(bookCollection);

  }

  public static void checkoutReadable(Readable readable) {
    readable.checkout();
  }

  public static void returnReadable(Readable readable) {
    readable.returnBook();
  }


}
