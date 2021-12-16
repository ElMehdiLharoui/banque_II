#include "pch.h"
#include "compte_payent.h"
using namespace Banque;
Banque::compte_payent::compte_payent(devise* d, client* c, devise* E):compte_courant(c,d,E),compte(c,d)
{
}

bool Banque::compte_payent::debiter(devise* d)
{
    if (!this->compte_courant::debiter(d)) return false;
    this->compte::debiter(d);
    return true;
}
