public class RadioButton extends Button {

  public RadioButton(ControlSize controlSize) {
    super(controlSize);
  }

  public void draw() {
    super.draw();
    System.out.println("Drawing a radio button.\n");
  }

}
