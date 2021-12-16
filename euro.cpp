#include "pch.h"
#include "euro.h"
using namespace Banque;
const double Banque::euro::mad = 9.13;
const double Banque::euro::dollr = 1.44;
Banque::euro::euro(double s):devise(s)
{
}

Banque::euro::euro(const euro& s):devise(s)
{
}

devise* Banque::euro::check(double s) const
{
    return new euro(s);
}

dollar* Banque::euro::todollar() const
{
    return new dollar(this->convert(dollr));
}

euro* Banque::euro::to_euro() const
{
    return new euro(*this);
}

MAD* Banque::euro::to_mad() const
{
    return new MAD(this->convert(mad));
}


void Banque::euro::afficher() const
{
    this->devise::afficher();
}
