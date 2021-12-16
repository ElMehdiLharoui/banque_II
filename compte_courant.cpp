#include "pch.h"

#include "compte_courant.h"
using namespace Banque;
compte_courant::compte_courant(client* c, devise*s, devise*ss):compte(c,s)
{
	this->decouverte = ss;


}

bool compte_courant::debiter(devise*D) 
{
	if (!this->sol_sup(D)) return false;
	return true;
}
