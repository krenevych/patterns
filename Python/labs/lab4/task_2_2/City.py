from abc import ABCMeta, abstractmethod


class City(metaclass=ABCMeta):
    @abstractmethod
    def getName(self):
        pass

    @abstractmethod
    def getTemperature(self):
        pass

    @abstractmethod
    def getTemperatureScale(self):
        pass

    @abstractmethod
    def getHasWeatherWarning(self):
        pass

    @abstractmethod
    def setHasWeatherWarning(self, hasWeatherWarning: bool):
        pass


if __name__ == '__main__':
    city = City()
