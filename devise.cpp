#include "pch.h"
#include "devise.h"
#include"dollar.h"
#include "euro.h"
#include "MAD.h"
#include<iostream>
#include<typeinfo>
using namespace std;
using namespace Banque;
devise::devise(double s)
{
	this->somme = s;
}

Banque::devise::devise(const devise& v)
{
	this->somme = v.somme;
}

devise& devise::operator+(const devise& v) const
{
	
	devise* c = this->Mytype(&v);
	devise* t = this->check(this->somme + c->somme);
	return *t;


}

devise& devise::operator-(const devise&v) const
{
	devise* c = this->Mytype(&v);
	devise* t = this->check(this->somme + c->somme);
	return *t;
}

devise& devise::operator*(const devise&d) const
{
	devise* c = this->Mytype(&d);
	devise* t = this->check(this->somme * c->somme);
	return *t;

}

devise& devise::operator*(double s) const
{
	
	devise* t = this->check(this->somme +s);
	return *t;
}

devise& devise::operator/(const devise&v) const
{
	devise* c = this->Mytype(&v);
	devise* t = this->check(this->somme / v.somme);
	return *t;
}

devise& devise::operator/(double s) const
{
	devise* t = this->check(this->somme / s);
	return *t;
}

bool devise::operator>=(const devise&v) const
{
	devise* c = this->Mytype(&v);
	if (this->somme >= c->somme) return true;
	return false;

	return false;
}

bool devise::operator<=(const devise&v) const
{
	devise* c = this->Mytype(&v);
	if (this->somme <= c->somme) return true;
	return false;
}

double devise::convert(double s) const
{
	return this->somme * s;
	
}

dollar* Banque::devise::todollar() const
{

	return new dollar(this->somme);
	
}

euro* Banque::devise::to_euro() const
{
	return new euro(this->somme);
}

MAD* Banque::devise::to_mad() const
{
	return new MAD(this->somme);
}


void devise::afficher() const
{
	cout << this->somme << endl;
}

devise* Banque::devise::Mytype(const devise*d) const
{

	// si le meme type convertion au type coresspendant 
	if (typeid(*this) == typeid(MAD)) return d->to_mad();
	if (typeid(*this) == typeid(dollar)) return d->todollar();
	if (typeid(*this) == typeid(euro)) return d->to_euro();
	
}
