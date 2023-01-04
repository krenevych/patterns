#include "buttons.h"
#include "control_sizes.h"


int main()
{
  CheckboxButton checkboxButton = CheckboxButton(new SmallControlSize());
  checkboxButton.draw();

  RadioButton radioButton = RadioButton(new MediumControlSize());
  radioButton.draw();

  DropdownButton dropdownButton = DropdownButton(new LargeControlSize());
  dropdownButton.draw();

  return 0;
}
