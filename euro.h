#pragma once
#include "devise.h"
namespace Banque {


    class euro :public devise
    {
        const static double dollr;
        const static double mad;
    private:
       
        euro(double);
        euro(const euro&);
        devise* check(double)const;
        dollar* todollar()const;
        euro* to_euro()const;
        MAD* to_mad()const;
        void afficher()const;


    };
};
