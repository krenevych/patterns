#include "Warior.h"
#include "WariorFactory.h"

#include<vector>

typedef std::vector<Warior*> Army;

int main() 
{
	Army army;

	ArcherFactory archer_fact;
	HorserFactory horser_fact;

	army.push_back(archer_fact.createWarior());
	army.push_back(horser_fact.createWarior());
	army.push_back(archer_fact.createWarior());
	army.push_back(horser_fact.createWarior());

	for (auto warior = army.begin(), end = army.end(); warior != end; ++warior)
	{
		(*warior)->typeOfWarior();
	}

	return 0;
}
