from abc import ABC, abstractmethod


class ButtonSize(ABC):
    @abstractmethod
    def get_size(self):
        pass


class SmallButtonSize(ButtonSize):
    def get_size(self):
        return f"size='small'"


class MediumButtonSize(ButtonSize):
    def get_size(self):
        return f"size='medium'"


class LargeButtonSize(ButtonSize):
    def get_size(self):
        return f"size='large'"


class TinyButtonSize(ButtonSize):
    def get_size(self):
        return f"size='tiny'"
