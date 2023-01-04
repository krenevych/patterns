#pragma once

#include <string>


class Auto
{
public:
	int const age;				    // вік автомобіля в роках
	std::string const model;	// марка автомобіля
	bool const damaged;			  // чи пошкоджений автомобіль після ДТП
	int const mileage;			  // пробіг автомобіля в кілометрах

	Auto(int, std::string, bool, int);
	~Auto();
};
