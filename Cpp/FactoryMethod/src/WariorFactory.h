#include <iostream>
#include "Warior.h"

#pragma once

class WariorFactory
{
public:
	WariorFactory();
	virtual ~WariorFactory();

	virtual Warior* createWarior() = 0;
};

class ArcherFactory : public WariorFactory
{
public:
	ArcherFactory();
	virtual ~ArcherFactory();

	virtual Warior* createWarior();
};

class HorserFactory : public WariorFactory
{
public:
	HorserFactory();
	virtual ~HorserFactory();

	virtual Warior* createWarior();
};



