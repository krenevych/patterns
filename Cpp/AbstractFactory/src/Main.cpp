#include <iostream>
#include "Army.h"
#include "ArmyFactory.h"

int main() 
{
	ArmyFactory* ua_army_factory = new UkraineArmyFactory();
	ArmyFactory* ru_army_factory = new RussiaArmyFactory();

	Army* ua_army = ua_army_factory->createArmy(5, 3);
	Army* ru_army = ru_army_factory->createArmy(4, 6);

	delete ua_army_factory;
	delete ru_army_factory;

	ua_army->showGlobalInfo();
	ru_army->showGlobalInfo();

	ua_army->dismissArmy();
	ru_army->dismissArmy();

	ua_army->showGlobalInfo();
	ru_army->showGlobalInfo();


	return 0;
}