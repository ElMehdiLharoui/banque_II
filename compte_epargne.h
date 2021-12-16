#pragma once
#include"compte.h"
#include"MAD.h"
namespace Banque {
	
	class compte_epargne : virtual public compte
	{
	private:
		double TauxInterert;

	public:
		compte_epargne(devise*, client*, double);
		void calculerIntert();
		bool debiter(devise*)override;

	};
};

