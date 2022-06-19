public class Canvas {

  public static void main(String[] args) {

    CheckboxButton checkboxButton = new CheckboxButton(new SmallControlSize());
    checkboxButton.draw();

    RadioButton radioButton = new RadioButton(new MediumControlSize());
    radioButton.draw();

    DropdownButton dropdownButton = new DropdownButton(new LargeControlSize());
    dropdownButton.draw();


  }

}
