#include "Machine.h"

#include <iostream>

Machine::Machine():
	mMachineId(-1)
{
}

Machine::~Machine() {}
void Machine::setMachineId(const unsigned int aId) 
{
	mMachineId = aId;
}


Tank::Tank() :
	Machine()
{}
Tank::~Tank() {}
void Tank::info()
{
	std::cout << "The type of this machine is Tank\n";
	std::cout << "The ID of this Tank is" << mMachineId << "\n";
}

UATank::UATank() {}
UATank::~UATank() {}
void UATank::info()
{
	std::cout << "The type of this machine is Ukrainian Tank\n";
	std::cout << "The ID of this Tank is " << mMachineId << " \n";
}

RUTank::RUTank() {}
RUTank::~RUTank() {}
void RUTank::info()
{
	std::cout << "The type of this machine is Rusian Tank\n";
	std::cout << "The ID of this Tank is " << mMachineId << " \n";
}

Ship::Ship() {}
Ship::~Ship() {}
void Ship::info()
{
	std::cout << "The type of this machine is Ship\n";
	std::cout << "The ID of this Ship is " << mMachineId << " \n";
}

UAShip::UAShip() {}
UAShip::~UAShip() {}
void UAShip::info()
{
	std::cout << "The type of this machine is Ukrainian Ship\n";
	std::cout << "The ID of this Ship is " << mMachineId << " \n";
}

RUShip::RUShip() {}
RUShip::~RUShip() {}
void RUShip::info()
{
	std::cout << "The type of this machine is Rusian Ship\n";
	std::cout << "The ID of this Ship is " << mMachineId << " \n";
}