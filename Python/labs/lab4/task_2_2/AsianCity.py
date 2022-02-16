from City import City

class AsianCity(City):

    def __init__(self, name: str, temperature: float):
        self.name = name
        self.temperature = temperature
        self.hasWeatherWarning = False

    def getName(self):
        return self.name

    def getTemperature(self):
        return self.temperature

    def getTemperatureScale(self):
        return "Celsius"

    def getHasWeatherWarning(self):
        return self.hasWeatherWarning

    def setHasWeatherWarning(self, hasWeatherWarning):
        self.hasWeatherWarning = hasWeatherWarning