#include "pch.h"
#include "operation.h"
#include "compte.h"
#include<iostream>
using namespace std;
using namespace Banque;
long operation::incr = 0;

operation::operation(devise* s, compte* c):numT(++incr)
{
	this->solde = s;
	this->c = c;

}

void operation::print_detail() const
{
	std::cout << this->heure << " " << date << " " << std::endl;
	

}

void operation::print() const
{
	this->solde->afficher();
}

operation::~operation()
{

	delete solde;
}
