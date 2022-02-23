from buttons import SimpleButton, DropdownButton, RadioButton, CheckboxButton
from sizes import TinyButtonSize, SmallButtonSize, MediumButtonSize, LargeButtonSize


def main():
    small_checkbox = CheckboxButton(SmallButtonSize())
    small_checkbox.draw_button()

    medium_radio = RadioButton(MediumButtonSize())
    medium_radio.draw_button()

    large_dropdown = DropdownButton(LargeButtonSize())
    large_dropdown.draw_button()

    print('\n\tNew button type and size:')
    tiny_simple = SimpleButton(TinyButtonSize())
    tiny_simple.draw_button()


if __name__ == '__main__':
    main()
