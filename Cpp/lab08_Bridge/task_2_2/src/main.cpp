#include "checkbox_buttons.hpp"
#include "dropdown_buttons.hpp"
#include "radio_buttons.hpp"


int main()
{
  SmallCheckboxButton checkboxButton{};
  checkboxButton.draw();

  MediumRadioButton radioButton{};
  radioButton.draw();

  LargeDropdownButton dropdownButton{};
  dropdownButton.draw();

  return 0;
}
