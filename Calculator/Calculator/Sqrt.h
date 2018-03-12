#pragma once
#include "Function.h"
class Sqrt : public Function
{
public:
	void print();
	Sqrt();
	~Sqrt();
	double getValue(const double val);
};

