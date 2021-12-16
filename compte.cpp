#include "pch.h"
#include "compte.h"
#include"MAD.h"
#include"operationRR.h"
#include"operationV.h"
#include"client.h"
#include"devise.h"
#include<iostream>
using namespace std;
using namespace Banque;

devise* compte::plafond = new MAD(500);// initialisation du plafond
int compte::cmpt = 0;

compte::compte(client* c, devise* m):numC(++cmpt)
{
    this->c = c;
    this->solde = m;

}

void compte::crediter(devise* s)
{
    *(this->solde) = *(this->solde)+ *s ;
    this->add_operation(s, false);// operation v
}

bool compte::debiter(devise* s)

{
    if (*(this->solde) >= *s) {

        *(this->solde) = *(this->solde) - *s;
        return true;
    }
    return false;
}

bool compte::verser(devise* s, compte& c)
{
    if (debiter(s) == true) c.crediter(s); return true;

    return false;
}

void compte::afficher() const
{
    cout << this->solde << " " << endl;
    this->c->print();
    this->solde->afficher();

}

void compte::calcule_pour(double d)
{
    *this->solde = *this->solde + *this->solde * (d / 100);
}

bool compte::sol_sup(devise* d) const
{
    if (*this->solde >= *d)return true;
    return false;
}

void compte::retir(devise* d)
{
    *this->solde = *this->solde - *d;
    this->add_operation(this->solde, true);

    
}

bool compte::add_operation(devise* d, bool type)
{
    if (type) lop.push_back(new operationV(d, this));
    else lop.push_back(new operationRR(d, this));

    return true;
}

compte::~compte()
{
    delete solde;
    for (int i = 0; i < lop.size(); i++) {

        delete this->lop[i];
          this->lop[i] = NULL;
    }

}

void Banque::compte::cpt_client(client* c)
{
    this->c = c;
    this->c->add_compte(this);
}

bool compte::moitier(devise* d) const
{
    devise& s = *solde / 2;
    if (s >= *d) return true;
    return false;
}
