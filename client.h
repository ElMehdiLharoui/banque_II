#pragma once
#include <vector>
#include<iostream>
using namespace std;
namespace Banque {
	class compte;
	class client
	{
	private:
		string nom;
		string prenom;
		string adresse;
		vector<compte*>listecompte;

	public:
		client(string, string, string);
		void add_compte(compte*);
		void print()const;
		~client();
	};
};
