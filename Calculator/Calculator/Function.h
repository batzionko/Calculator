#pragma once
#include <iostream>
#include <cmath>
class Function
{
public:
	Function();
	void virtual print()=0;
	double virtual getValue(const double) = 0;
	~Function();
};

