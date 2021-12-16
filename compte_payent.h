#pragma once
#include "compte_courant.h"
namespace Banque {
    class compte_payent :
        virtual   public compte_courant
    {
    private:
        static devise* price;
    public:
        compte_payent(devise* d, client* c, devise* E);
        bool debiter(devise* d) override;
        void afficher()const;


    };
};

