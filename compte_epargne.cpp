#include "pch.h"
#include "compte_epargne.h"
using namespace Banque;
compte_epargne::compte_epargne(devise* s, client* c, double i):compte(c,s)
{

	if (i > 0 && i < 100) this->TauxInterert = i;

}

void compte_epargne::calculerIntert()
{
	this->calcule_pour(TauxInterert);

}

bool compte_epargne::debiter(devise* D)
{

	if (!this->moitier(D)) return false;
	this->compte::debiter(D);
	return true;

}
