#include "Calculator.h"
#include "ln.h"
#include "Sqrt.h"


Calculator::Calculator()
{
	
	//ln l;
	m_function.push_back(std::make_shared<ln>());
	m_function.push_back(std::make_shared<Sqrt>());


}


Calculator::~Calculator()
{
}
