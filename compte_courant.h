#pragma once
#include "compte.h"

namespace Banque {
    class compte_courant :
        virtual public compte
    {
    private:

        devise* decouverte;

    public:
        compte_courant(client*, devise*, devise*);
        bool debiter(devise*)override;

    };
};
