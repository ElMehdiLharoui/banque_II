#include "pch.h"
#include "operationV.h"
using namespace std;
using namespace Banque;
operationV::operationV(devise* s, compte* c):operation(s,c)
{


}

void operationV::print() const
{

	this->print();
	std::cout << this->libell << std::endl;
	this->print_detail();
}

