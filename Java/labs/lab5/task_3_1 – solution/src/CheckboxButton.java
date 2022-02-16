public class CheckboxButton extends Button {

  public CheckboxButton(ControlSize controlSize) {
    super(controlSize);
  }

  public void draw() {
    super.draw();
    System.out.println("Drawing a checkbox button.\n");
  }

}
