#include "WariorFactory.h"
#include "Warior.h"

//#include <iostream>



WariorFactory::WariorFactory()
{
}
WariorFactory::~WariorFactory()
{
}

ArcherFactory::ArcherFactory() : WariorFactory()
{
};

ArcherFactory::~ArcherFactory() 
{
}
Warior* ArcherFactory::createWarior()
{
	std::cout << "createWarior: Archer" << "\n";
	Warior* warior = new Archer();
	return warior;
}

HorserFactory::HorserFactory() 
{
};
HorserFactory::~HorserFactory() 
{
}

Warior* HorserFactory::createWarior()
{
	std::cout << "createWarior: Horser" << "\n";
	Warior* warior = new Horser();
	return warior;
}

