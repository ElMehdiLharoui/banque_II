#pragma once
#include "devise.h"
namespace Banque {
    class dollar :public devise
    {
        const static double mad;
        const static double eur;
    public :

        dollar(double);
        dollar(const dollar&);
        devise* check(double)const override;
        dollar* todollar()const;
        MAD* to_mad()const;
        euro* to_euro()const;
        void afficher()const;


    };
};
