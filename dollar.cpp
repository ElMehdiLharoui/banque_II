#include "pch.h"
#include "dollar.h"
using namespace Banque;
using namespace std;
const double dollar::mad = 10.5;
const double dollar::eur = 1.24;
Banque::dollar::dollar(double s):devise(s)
{
}

Banque::dollar::dollar(const dollar&v):devise(v)
{
	
}

devise* Banque::dollar::check(double s) const
{
	return new dollar(s);
}

dollar* Banque::dollar::todollar() const
{
	return new dollar(*this);
}

MAD* Banque::dollar::to_mad() const
{
	return new MAD(this->convert(mad));
}

euro* Banque::dollar::to_euro() const
{
	return new euro(this->convert(eur));
}

void Banque::dollar::afficher() const
{
	this->devise::afficher();
	
}
