#include "checkbox_buttons.h"
#include "dropdown_buttons.h"
#include "radio_buttons.h"


int main()
{
  SmallCheckboxButton checkboxButton = SmallCheckboxButton();
  checkboxButton.draw();

  MediumRadioButton radioButton = MediumRadioButton();
  radioButton.draw();

  LargeDropdownButton dropdownButton = LargeDropdownButton();
  dropdownButton.draw();

  return 0;
}
