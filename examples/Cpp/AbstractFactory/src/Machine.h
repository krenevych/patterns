#ifndef _Machine_h_
#define _Machine_h_

class Machine
{
public:
	Machine();
	virtual ~Machine();
	virtual void info() = 0;

	void setMachineId(const unsigned int aId);

protected:

	unsigned int mMachineId;
};

class Tank: public Machine
{
public:
	Tank();
	virtual ~Tank();
	virtual void info();
};

class UATank : public Tank
{
public:
	UATank();
	virtual ~UATank();
	virtual void info();
};

class RUTank : public Tank
{
public:
	RUTank();
	virtual ~RUTank();
	virtual void info();
};

class Ship : public Machine
{
public:
	Ship();
	virtual ~Ship();
	virtual void info();
};

class UAShip : public Ship
{
public:
	UAShip();
	virtual ~UAShip();
	virtual void info();
};

class RUShip : public Ship
{
public:
	RUShip();
	virtual ~RUShip();
	virtual void info();
};

#endif  // _Machine_h_