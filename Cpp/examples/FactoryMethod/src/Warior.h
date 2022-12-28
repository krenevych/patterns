#pragma once

#include <iostream>

class Warior
{
public:
	Warior() {};
	virtual ~Warior() {};
	virtual void typeOfWarior() = 0;
};

class Archer : public Warior
{
public:
	Archer() : Warior() {};
	~Archer() {};
	void typeOfWarior()
	{
		std::cout << "This warior is Archer" << "\n";
	}
};

class Horser : public Warior
{
public:
	Horser() : Warior() {};
	~Horser() {};
	void typeOfWarior()
	{
		std::cout << "This warior is Horser" << "\n";
	}
};

