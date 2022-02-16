#ifndef _ArmyFactory_h_
#define _ArmyFactory_h_

#include "Army.h"

class ArmyFactory
{
public:
	ArmyFactory();
	virtual ~ArmyFactory();
	virtual Army* createArmy(const unsigned int aTanksNum, const unsigned int aShipsNum) = 0;
};


class UkraineArmyFactory : public ArmyFactory
{
public:
	UkraineArmyFactory();
	virtual ~UkraineArmyFactory();
	Army* createArmy(const unsigned int aTanksNum, const unsigned int aShipsNum);
};

class RussiaArmyFactory : public ArmyFactory
{
public:
	RussiaArmyFactory();
	virtual ~RussiaArmyFactory();
	Army* createArmy(const unsigned int aTanksNum, const unsigned int aShipsNum);
};

#endif  // _ArmyFactory_h_
