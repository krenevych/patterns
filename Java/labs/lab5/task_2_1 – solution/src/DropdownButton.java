public class DropdownButton extends Button {

  public DropdownButton(ControlSize controlSize) {
    super(controlSize);
  }

  public void draw() {
    super.draw();
    System.out.println("Drawing a dropdown button.\n");
  }

}
