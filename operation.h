#pragma once
#include"MAD.h"
#include "devise.h"
namespace Banque {
	class compte;
	class operation
	{

	public:
		operation(devise*, compte*);
		void print_detail()const;
		virtual void print()const;
		virtual ~operation();

	private:
		static long incr;
		const long numT;
		string date;
		string heure;
		devise* solde;
		compte* c;
	};
};

