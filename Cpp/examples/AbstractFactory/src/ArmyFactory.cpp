#include "ArmyFactory.h"

ArmyFactory::ArmyFactory() {}
ArmyFactory::~ArmyFactory() {}

UkraineArmyFactory::UkraineArmyFactory(){}
UkraineArmyFactory::~UkraineArmyFactory(){}

Army* UkraineArmyFactory::createArmy(const unsigned int aTanksNum, const unsigned int aShipsNum)
{
	Army* army = new UAArmy();
	for (unsigned int i = 0; i < aTanksNum; ++i)
	{
		army->mTanks.push_back(new UATank());
		army->mTanks.back()->setMachineId(i);
	}

	for (unsigned int i = 0; i < aShipsNum; ++i)
	{
		army->mShips.push_back(new UAShip());
		army->mShips.back()->setMachineId(i);
	}

	return army;
}

RussiaArmyFactory::RussiaArmyFactory(){}
RussiaArmyFactory::~RussiaArmyFactory(){}
Army* RussiaArmyFactory::createArmy(const unsigned int aTanksNum, const unsigned int aShipsNum)
{
	Army* army = new RUArmy();

	for (unsigned int i = 0; i < aTanksNum; ++i)
	{
		army->mTanks.push_back(new RUTank());
		army->mTanks.back()->setMachineId(i);
	}
	for (unsigned int i = 0; i < aShipsNum; ++i)
	{
		army->mShips.push_back(new RUShip());
		army->mShips.back()->setMachineId(i);
	}

	return army;
}