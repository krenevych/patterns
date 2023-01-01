#include "north_american_city.h"
#include "asian_city.h"
#include "weather_warnings.h"


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
