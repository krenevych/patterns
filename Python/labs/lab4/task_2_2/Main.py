from NorthAmericanCity import NorthAmericanCity
from AsianCity import AsianCity
from WeatherWarnings import WeatherWarnings


def main():
    weatherWarnings = WeatherWarnings()

    chicago = NorthAmericanCity("Chicago", 16)
    weatherWarnings.postWarning(chicago)

    phoenix = NorthAmericanCity("Phoenix", 104)
    weatherWarnings.postWarning(phoenix)

    portland = NorthAmericanCity("Portland", 70)
    weatherWarnings.postWarning(portland)

    bangkok = AsianCity("Bangkok", 50)
    weatherWarnings.postWarning(bangkok)


if __name__ == '__main__':
    main()
