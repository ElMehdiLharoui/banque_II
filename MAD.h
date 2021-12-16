#pragma once
#include"devise.h"
namespace Banque {


	class MAD :public devise
	{
		const static double ToDollar;
		const static double ToEuro;

	public:
		MAD(double);
		void afficher()const;
		devise* check(double rat)const;
		dollar* todollar()const;
		euro* to_euro()const;
		MAD* to_mad()const;
	};
};

