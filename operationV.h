#pragma once
#include "operation.h"
#include<iostream>
using namespace std;
namespace Banque {

    class operationV :
        public operation
    {
    private:
        string libell;
    public:
        operationV(devise*, compte*);
        void print()const override;

    };
};
