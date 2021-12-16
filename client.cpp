#include "pch.h"
#include "client.h"
#include<iostream>
using namespace std;
using namespace Banque;
client::client(string nom, string prenom, string adresse)
{
	this->nom = nom;
	this->prenom = prenom;
	this->adresse = adresse;
}

void client::add_compte(compte*c)
{
	listecompte.push_back(c); // ajouter le compte
}

void client::print() const
{
	cout << this->nom << " " << this->prenom << " " << this->adresse << endl;
}

client::~client()
{

	for (int i = 0; i < listecompte.size(); i++) {

		delete listecompte[i];
		listecompte[i] = NULL;
	}

}
