#include "north_american_city.hpp"
#include "asian_city.hpp"
#include "weather_warnings.hpp"


int main()
{
  WeatherWarnings weatherWarnings = WeatherWarnings();

  NorthAmericanCity chicago = NorthAmericanCity("Chicago", 16);
  weatherWarnings.postWarning(chicago);

  NorthAmericanCity phoenix = NorthAmericanCity("Phoenix", 104);
  weatherWarnings.postWarning(phoenix);

  NorthAmericanCity portland = NorthAmericanCity("Portland", 70);
  weatherWarnings.postWarning(portland);

  AsianCity bangkok = AsianCity("Bangkok", 50);
  weatherWarnings.postWarning(bangkok);

  return 0;
}
