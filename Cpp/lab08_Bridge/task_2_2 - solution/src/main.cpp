#include "buttons.hpp"
#include "control_sizes.hpp"


int main()
{
  CheckboxButton checkboxButton{new SmallControlSize()};
  checkboxButton.draw();

  RadioButton radioButton{new MediumControlSize()};
  radioButton.draw();

  DropdownButton dropdownButton{new LargeControlSize()};
  dropdownButton.draw();

  return 0;
}
