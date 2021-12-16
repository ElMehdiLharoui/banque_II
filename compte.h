#pragma once

#include <vector>
#include"pch.h"
using namespace std;

namespace Banque {
	
	class client;
	class devise;
	class operation;
	class compte
	{

	private:
	 static  int cmpt;
		const int  numC;
		
		client* c;
		devise* solde;
		static devise* plafond;
		vector<operation*>lop;
	public:
		compte(client*, devise*);
		virtual void crediter(devise*)=0;
		virtual bool debiter(devise*)=0;
		bool verser(devise*c, compte&);
		void afficher()const;
		virtual ~compte();
		void cpt_client(client*);
	protected:
		void calcule_pour(double d);
		bool moitier(devise*) const;
		bool sol_sup(devise* d)const;
		void retir(devise* d);
		bool add_operation(devise* d, bool type);
		
	};
};

