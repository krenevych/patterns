#ifndef _Army_h_
#define _Army_h_

#include <vector>
#include "Machine.h"

class Army
{
public:
	Army();
	virtual ~Army();

	void dismissArmy();
	void showInfo();
	virtual void showType() = 0;
	void showGlobalInfo();

public:
	std::vector<Machine*> mTanks;
	std::vector<Machine*> mShips;
};

class UAArmy : public Army
{
public:
	UAArmy();
	virtual ~UAArmy();
	void showType();
};

class RUArmy : public Army
{
public:
	RUArmy();
	virtual ~RUArmy();
	void showType();
};

#endif // _Army_h_

