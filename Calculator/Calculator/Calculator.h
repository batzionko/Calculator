#pragma once
#include "Function.h"
#include <vector>
#include <memory>
class Calculator
{
public:
	Calculator();
	~Calculator();
	std::vector<std::shared_ptr<Function>> getfunc() { return m_function; }
	
private:
	std::vector<std::shared_ptr<Function>> m_function;
		//std::vector<std::unique_ptr<Function*>> m_function;
	//vector 
};

