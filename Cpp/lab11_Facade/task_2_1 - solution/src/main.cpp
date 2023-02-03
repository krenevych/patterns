#include <boost/date_time/gregorian/gregorian_types.hpp>

#include "vacation_facade.hpp"


int main ()
{
  using namespace std;
  using namespace boost::gregorian;

  date startDate(2021, 8, 1);
  date endDate(2021, 8, 15);

  VacationFacade vacationFacade;
  vacationFacade.book(startDate, endDate);

  return 0;
}
