public class Book implements Readable {

    String name;
    boolean checkedOut;

    public Book(String name, boolean checkedOut) {
        this.name = name;
        this.checkedOut = checkedOut;
    }

    public void checkout() {
        if(!checkedOut) {
            System.out.println("Checking out " + name + "\n");
            checkedOut = true;
        } else {
            System.out.println(name + " is already checked out\n");
        }
    }

    public void returnBook() {
        if(checkedOut) {
            System.out.println("Returning " + name + "\n");
            checkedOut = false;
        } else {
            System.out.println(name + " is not checked out\n");
        }
    }

}
