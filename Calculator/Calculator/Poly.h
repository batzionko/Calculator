#pragma once
#include "Function.h"
#include <vector>
class Poly : public Function
{
private:
	std::vector<double> m_vec;
	
public:
	void print();
	double  getValue(const double val);
	Poly(std::vector<double>vec);
	~Poly();
};

