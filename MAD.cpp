#include "pch.h"
#include "MAD.h"
#include<iostream>
using namespace std;
using namespace Banque;
const double ToDollar = 10.5;
const double ToEuro = 9.12;
MAD::MAD(double s ):devise(s)
{
	
}

void MAD::afficher() const
{
	this->devise::afficher();
}

devise* MAD::check(double rat) const
{
	
	return new MAD(rat);
}

dollar* MAD::todollar() const
{
	return new dollar(this->convert(this->ToDollar));
}

euro* MAD::to_euro() const
{
	return new euro(this->convert(this->ToEuro));
}

MAD* MAD::to_mad() const
{
	return new MAD(*this);
}
