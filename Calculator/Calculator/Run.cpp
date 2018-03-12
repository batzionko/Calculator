#include "Run.h"



Run::Run()
{
	printCalList();

}


Run::~Run()
{
}
//------------------------
void Run:: printCalList()
{
	std::cout << "this is the list:\n" ;
	int i = 0;
	for (auto &e : m_cal.getfunc())
	{
		std::cout << i << ": ";
		i++;
			e->print();

	}
}