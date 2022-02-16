from City import City

class NorthAmericanCity(City):

    def __init__(self, name, temperature):
        self.name = name
        self.temperature = temperature
        self.hasWeatherWarning = False

    def getName(self):
        return self.name

    def getTemperature(self):
        return self.temperature

    def getTemperatureScale(self):
        return "Fahrenheit"

    def getHasWeatherWarning(self):
        return self.hasWeatherWarning

    def setHasWeatherWarning(self, hasWeatherWarning):
        self.hasWeatherWarning = hasWeatherWarning