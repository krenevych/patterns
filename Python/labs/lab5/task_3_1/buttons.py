from abc import ABC, abstractmethod
from sizes import ButtonSize


class ButtonType(ABC):
    def __init__(self, button_size: ButtonSize):
        self._button_size = button_size

    @abstractmethod
    def draw_button(self):
        pass


class RadioButton(ButtonType):
    def __init__(self, button_size: ButtonSize):
        super(RadioButton, self).__init__(button_size)

    def draw_button(self):
        print(f'Drawing radio button [{self._button_size.get_size()}]')


class CheckboxButton(ButtonType):
    def __init__(self, button_size: ButtonSize):
        super(CheckboxButton, self).__init__(button_size)

    def draw_button(self):
        print(f'Drawing checkbox button [{self._button_size.get_size()}]')


class DropdownButton(ButtonType):
    def __init__(self, button_size: ButtonSize):
        super(DropdownButton, self).__init__(button_size)

    def draw_button(self):
        print(f'Drawing dropdown button [{self._button_size.get_size()}]')


class SimpleButton(ButtonType):
    def __init__(self, button_size: ButtonSize):
        super(SimpleButton, self).__init__(button_size)

    def draw_button(self):
        print(f'Drawing simple button [{self._button_size.get_size()}]')
