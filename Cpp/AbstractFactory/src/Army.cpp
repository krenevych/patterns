#include "Army.h"
#include <iostream>

Army::Army() {}
Army::~Army()
{
	dismissArmy();
}

void Army::dismissArmy()
{
	const unsigned int tanksCount = mTanks.size();
	for (unsigned int i = 0; i < tanksCount; ++i)
	{
		delete mTanks[i];
	}
	mTanks.clear();

	const unsigned int shipsCount = mShips.size();
	for (unsigned int i = 0; i < shipsCount; ++i)
	{
		delete mShips[i];
	}
	mShips.clear();
}

void Army::showInfo() 
{
	showType();
	std::cout << "The army has " << mTanks.size() << " tanks\n";
	std::cout << "The army has " << mShips.size() << " ships\n";
}

void Army::showGlobalInfo() 
{
	showInfo();
	const unsigned int tanksCount = mTanks.size();
	for (unsigned int i = 0; i < tanksCount; ++i)
	{
		mTanks[i]->info();
	}

	const unsigned int shipsCount = mShips.size();
	for (unsigned int i = 0; i < shipsCount; ++i)
	{
		mShips[i]->info();
	}
}

UAArmy::UAArmy() {}
UAArmy::~UAArmy() {}
void UAArmy::showType() 
{
	std::cout << "===========  That is Ukrainian Army ===============\n";
}

RUArmy::RUArmy() {}
RUArmy::~RUArmy() {}
void RUArmy::showType()
{
	std::cout << "===========  That is Russian Army ===============\n";
}


