#pragma once
#include "operation.h"
namespace Banque {
    class operationRR :
        public operation
    {

    public:
        operationRR(devise*, compte*);
        void print()const;


    private:

        string libelle;


    };
};

