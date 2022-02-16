from City import City


class WeatherWarnings:
    MAX_TEMPERATURE = 100
    MIN_TEMPERATURE = 16

    def postWarning(self, city: City):
        if (city.getTemperature() >= WeatherWarnings.MAX_TEMPERATURE
                or city.getTemperature() <= WeatherWarnings.MIN_TEMPERATURE):
            print(f"Warning! Current temperature in {city.getName()} is "
                  f"{city.getTemperature()} {city.getTemperatureScale()}")
            city.setHasWeatherWarning(True)
        else:
            print("Temperature in " + city.getName() + " is OK.")