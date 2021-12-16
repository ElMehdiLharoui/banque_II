#include "pch.h"
#include "operationRR.h"
#include<iostream>
using namespace std;
using namespace Banque;
operationRR::operationRR(devise* s, compte* c):operation(s,c)
{

}


void operationRR::print() const
{
	this->print_detail();
	cout << this->libelle <<" "<< endl;
	this->print();
}
