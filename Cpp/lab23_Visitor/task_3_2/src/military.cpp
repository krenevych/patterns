#include "military.hpp"


//MilitaryObject
MilitaryObject::MilitaryObject(std::string const& name)
: name(name) {}


//GeneralStaff
GeneralStaff::GeneralStaff(std::string const& name, int generals, int secretPaper)
: MilitaryObject(name), generals(generals), secretPaper(secretPaper) {}

std::ostream& operator<<(std::ostream& os, GeneralStaff const& generalStaff)
{
  os << "GeneralStaff: У генеральному штабі " << generalStaff.name
     << " є " << generalStaff.generals << " геренералів та "
     << generalStaff.secretPaper << " секретних паперів.";

  return os;
}


//MilitaryBase
MilitaryBase::MilitaryBase(std::string const& name, int officers, int soldiers, int jeeps, int tanks)
: MilitaryObject(name), officers(officers), soldiers(soldiers), jeeps(jeeps), tanks(tanks) {}

std::ostream& operator<<(std::ostream& os, MilitaryBase const& militaryBase)
{
  os << "MilitaryBase: На військовій базі " << militaryBase.name
     << " є " << militaryBase.officers << " офіцерів, "
     << militaryBase.soldiers << " солдатів, "
     << militaryBase.jeeps << " джипів та "
     << militaryBase.tanks << " танків.";

  return os;
}
